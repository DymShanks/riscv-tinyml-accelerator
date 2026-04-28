#!/usr/bin/env python3
"""
Python DV Testbench for tinyml_accelerator
Compiles a Verilator C++ executable per test, runs it, parses stdout.
Produces: tb/results.json  (pass/fail per test)
          tb/coverage.log  (instruction sequence coverage data)
"""
import subprocess, os, json, sys, textwrap
from pathlib import Path
from dataclasses import dataclass, field

ROOT  = Path(__file__).parent.parent
RTL   = ROOT / "rtl" / "tinyml_accelerator.v"
TB    = Path(__file__).parent
BUILD = TB / "sim_build"

CUSTOM_MAC      = 0x0000000B
CUSTOM_MAC_RELU = 0x0000100B
CUSTOM_CLR      = 0x0000200B
NOP_INSN        = 0x00000013

@dataclass
class CoverageDB:
    hits: dict = field(default_factory=dict)
    def record(self, tag: str):
        self.hits[tag] = self.hits.get(tag, 0) + 1
    def save(self, path: Path):
        with open(path, "w") as f:
            for k, v in sorted(self.hits.items()):
                f.write(f"{k}: {v}\n")
        print(f"  Coverage log → {path}")

cov = CoverageDB()

def verilator_build():
    BUILD.mkdir(exist_ok=True)
    r = subprocess.run([
        "verilator", "--cc", "--build",
        "--Mdir", str(BUILD),
        str(RTL)
    ], capture_output=True, text=True)
    if r.returncode != 0:
        print("Verilator error:\n", r.stderr); sys.exit(1)

VERILATOR_ROOT = subprocess.run(
    ["verilator", "--getenv", "VERILATOR_ROOT"],
    capture_output=True, text=True
).stdout.strip()
VL_INC = f"{VERILATOR_ROOT}/include"

def build_and_run(harness_code: str) -> str:
    cpp = BUILD / "harness.cpp"
    exe = BUILD / "harness"
    cpp.write_text(harness_code)
    r = subprocess.run([
        "g++", "-O2", "-std=c++17",
        f"-I{BUILD}", f"-I{VL_INC}",
        str(cpp),
        str(BUILD / "Vtinyml_accelerator__ALL.a"),
        f"{VL_INC}/verilated.cpp",
        f"{VL_INC}/verilated_threads.cpp",
        "-o", str(exe)
    ], capture_output=True, text=True)
    if r.returncode != 0:
        raise RuntimeError(f"Compile error:\n{r.stderr}")
    r2 = subprocess.run([str(exe)], capture_output=True, text=True)
    return r2.stdout

def make_harness(test_body: str) -> str:
    return textwrap.dedent(f"""
    #include "Vtinyml_accelerator.h"
    #include "verilated.h"
    #include <cstdio>

    Vtinyml_accelerator* dut;

    void tick(int n=1) {{
        for(int i=0;i<n*2;i++){{dut->clk=!dut->clk;dut->eval();}}
    }}
    void reset() {{
        dut->resetn=0;dut->pcpi_valid=0;dut->pcpi_insn=0;
        dut->pcpi_rs1=0;dut->pcpi_rs2=0;
        tick(4); dut->resetn=1; tick(2);
    }}
    unsigned run_insn(unsigned rs1, unsigned rs2, unsigned insn){{
        dut->pcpi_valid=1;
        dut->pcpi_insn=insn;
        dut->pcpi_rs1=rs1; dut->pcpi_rs2=rs2;
        tick(1);
        unsigned r=dut->pcpi_rd;
        dut->pcpi_valid=0; tick(2);
        return r;
    }}
    unsigned run_mac(unsigned rs1,unsigned rs2,int relu=0){{
        return run_insn(rs1,rs2,relu?{CUSTOM_MAC_RELU}:{CUSTOM_MAC});
    }}
    unsigned run_clr(){{
        return run_insn(0,0,{CUSTOM_CLR});
    }}
    int main(){{
        dut=new Vtinyml_accelerator;
        dut->clk=0;
        reset();
        {test_body}
        delete dut;
        return 0;
    }}
    """)

TESTS = [
    # ── Original 8 tests ─────────────────────────────────────────
    ("basic MAC: 10*5=50",
     'unsigned r=run_mac(10,5);printf(r==50?"PASS %u\\n":"FAIL got %u expected 50\\n",r);',
     "MAC|rs1_nonzero|rs2_nonzero"),

    ("accumulation: neuron=70",
     'run_mac(2,10);run_mac(4,5);run_mac(1,20);unsigned r=run_mac(5,2);'
     'printf(r==70?"PASS %u\\n":"FAIL got %u expected 70\\n",r);',
     "MAC|accumulate|4inputs"),

    ("ReLU clamps negative to 0",
     'unsigned r=run_mac(0xFFFFFFFF,1,1);printf(r==0?"PASS %u\\n":"FAIL got %u expected 0\\n",r);',
     "MAC_RELU|negative_input"),

    ("ReLU passes positive unchanged",
     'unsigned r=run_mac(5,6,1);printf(r==30?"PASS %u\\n":"FAIL got %u expected 30\\n",r);',
     "MAC_RELU|positive_input"),

    ("zero input: 0*999=0",
     'unsigned r=run_mac(0,999);printf(r==0?"PASS %u\\n":"FAIL got %u expected 0\\n",r);',
     "MAC|rs1_zero"),

    ("pcpi handshake signals assert",
     f'dut->pcpi_valid=1;dut->pcpi_insn={CUSTOM_MAC};dut->pcpi_rs1=3;dut->pcpi_rs2=3;'
     'tick(2);int ok=(dut->pcpi_ready==1&&dut->pcpi_wr==1);'
     'printf(ok?"PASS handshake ok\\n":"FAIL ready=%d wr=%d\\n",dut->pcpi_ready,dut->pcpi_wr);',
     "MAC|handshake"),

    ("reset clears accumulator",
     'run_mac(10,10);'
     'dut->resetn=0;tick(4);dut->resetn=1;tick(2);'
     'unsigned r=run_mac(1,0);printf(r==0?"PASS %u\\n":"FAIL got %u expected 0\\n",r);',
     "MAC|reset_mid_sequence"),

    ("NOP instruction ignored",
     f'run_mac(5,5);'
     f'dut->pcpi_valid=1;dut->pcpi_insn={NOP_INSN};dut->pcpi_rs1=99;dut->pcpi_rs2=99;'
     'tick(2);int ok=(dut->pcpi_ready==0);'
     'printf(ok?"PASS ready=0\\n":"FAIL ready should be 0 got %d\\n",dut->pcpi_ready);',
     "NOP|not_custom_opcode"),

    # ── 5 new tests for 100% coverage ────────────────────────────

    ("rs2 zero: 99*0=0",
     'unsigned r=run_mac(99,0);printf(r==0?"PASS %u\\n":"FAIL got %u expected 0\\n",r);',
     "MAC|rs2_zero"),

    ("boundary max value: 0xFFFF*0xFFFF",
     'reset();unsigned r=run_mac(0xFFFF,0xFFFF);'
     'unsigned expected=0xFFFF*0xFFFF;'
     'printf(r==expected?"PASS %u\\n":"FAIL got %u expected %u\\n",r,expected);',
     "MAC|boundary_max_value"),

    ("back to back: 16 MACs no gap",
     'reset();'
     'for(int i=0;i<15;i++){dut->pcpi_valid=1;dut->pcpi_insn=0x0000000B;'
     'dut->pcpi_rs1=1;dut->pcpi_rs2=1;tick(1);dut->pcpi_valid=0;}'
     'unsigned r=run_mac(1,1);'
     'printf(r==16?"PASS %u\\n":"FAIL got %u expected 16\\n",r);',
     "MAC|back_to_back_instructions"),

    ("ReLU zero boundary: 0*0 relu=0",
     'reset();unsigned r=run_mac(0,0,1);printf(r==0?"PASS %u\\n":"FAIL got %u expected 0\\n",r);',
     "MAC_RELU|zero_boundary"),

    ("NOP mid sequence: state preserved",
     'run_mac(5,5);'
     f'dut->pcpi_valid=1;dut->pcpi_insn={NOP_INSN};dut->pcpi_rs1=99;dut->pcpi_rs2=99;'
     'tick(2);dut->pcpi_valid=0;tick(1);'
     'unsigned r=run_mac(0,0);'
     'printf(r==25?"PASS %u\\n":"FAIL got %u expected 25 (acc preserved)\\n",r);',
     "NOP|during_valid_sequence"),
]

if __name__ == "__main__":
    print("\n" + "="*52)
    print("  tinyml_accelerator — Python DV Testbench")
    print("="*52)

    print("  Building Verilator objects...", end=" ", flush=True)
    verilator_build()
    print("done\n")

    results = []
    for name, body, cov_tag in TESTS:
        try:
            out = build_and_run(make_harness(body)).strip()
            passed = out.startswith("PASS")
            cov.record(cov_tag)
            status = "PASS" if passed else "FAIL"
            color  = "\033[32m" if passed else "\033[31m"
            print(f"  {color}{status}\033[0m  {name}  [{out}]")
            results.append({"test": name, "status": status, "output": out})
        except Exception as e:
            print(f"  \033[31mERROR\033[0m {name}: {e}")
            results.append({"test": name, "status": "ERROR", "output": str(e)})

    passed = sum(1 for r in results if r["status"] == "PASS")
    total  = len(results)
    print("\n" + "="*52)
    print(f"  Results: {passed}/{total} passed")
    print("="*52 + "\n")

    with open(TB / "results.json", "w") as f:
        json.dump(results, f, indent=2)
    cov.save(TB / "coverage.log")

    sys.exit(0 if passed == total else 1)
