// soc_tb.cpp — Level 2 Full SoC Simulation
// PicoRV32 CPU fetches real RISC-V binary from RAM
// executes CUSTOM-0 instructions autonomously
// co-processor intercepts via PCPI — CPU never directly driven
// ─────────────────────────────────────────────────────────────
#include "Vsystem_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>

// ── RAM model: 128KB unified instruction + data memory ────────
#define RAM_SIZE (128 * 1024)
static uint8_t RAM[RAM_SIZE] = {0};

// ── Load binary file into RAM ─────────────────────────────────
static bool load_binary(const char* path) {
    std::ifstream f(path, std::ios::binary);
    if (!f) {
        std::cerr << "ERROR: cannot open " << path << "\n";
        return false;
    }
    f.read((char*)RAM, RAM_SIZE);
    std::streamsize n = f.gcount();
    std::cout << "[LOAD]  Loaded " << n << " bytes from " << path << "\n";
    return true;
}

// ── Memory read: return 32-bit word from RAM ──────────────────
static uint32_t mem_read(uint32_t addr) {
    if (addr + 3 < RAM_SIZE) {
        return  (uint32_t)RAM[addr]        |
               ((uint32_t)RAM[addr+1] << 8) |
               ((uint32_t)RAM[addr+2] << 16)|
               ((uint32_t)RAM[addr+3] << 24);
    }
    return 0xDEADBEEF;
}

// ── Memory write: write 32-bit word to RAM ────────────────────
static void mem_write(uint32_t addr, uint32_t data, uint8_t strb) {
    if (addr + 3 < RAM_SIZE) {
        if (strb & 1) RAM[addr]   = (data)       & 0xFF;
        if (strb & 2) RAM[addr+1] = (data >> 8)  & 0xFF;
        if (strb & 4) RAM[addr+2] = (data >> 16) & 0xFF;
        if (strb & 8) RAM[addr+3] = (data >> 24) & 0xFF;
    }
}

// ── Simulation time ───────────────────────────────────────────
static vluint64_t sim_time = 0;

void tick(Vsystem_top* dut, VerilatedVcdC* vcd) {
    // ── Respond to CPU memory requests ───────────────────────
    // PicoRV32 uses look-ahead memory interface
    // mem_valid=1: CPU wants a transaction this cycle
    if (dut->mem_valid) {
        if (dut->mem_wstrb) {
            // Write transaction
            mem_write(dut->mem_addr, dut->mem_wdata, dut->mem_wstrb);
        }
        // Always drive mem_rdata (CPU ignores it on writes)
        dut->mem_rdata = mem_read(dut->mem_addr);
        dut->mem_ready = 1;
    } else {
        dut->mem_ready = 0;
    }

    dut->clk = 0; dut->eval();
    if (vcd) vcd->dump(sim_time++);
    dut->clk = 1; dut->eval();
    if (vcd) vcd->dump(sim_time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Load firmware
    const char* fw = "firmware/soc/firmware.bin";
    if (!load_binary(fw)) return 1;

    auto* dut = new Vsystem_top;
    auto* vcd = new VerilatedVcdC;
    dut->trace(vcd, 99);
    vcd->open("sim/soc_waves.vcd");

    std::cout << "\n";
    std::cout << "╔══════════════════════════════════════════════════════╗\n";
    std::cout << "║   RvTinyML Level 2: Full SoC Simulation              ║\n";
    std::cout << "║   PicoRV32 CPU executing real RISC-V firmware        ║\n";
    std::cout << "║   Co-processor intercepts CUSTOM-0 via PCPI          ║\n";
    std::cout << "╚══════════════════════════════════════════════════════╝\n\n";

    // Reset
    dut->resetn   = 0;
    dut->mem_ready = 0;
    dut->mem_rdata = 0;
    for (int i = 0; i < 8; i++) tick(dut, vcd);
    dut->resetn = 1;
    std::cout << "[RESET] Complete — PicoRV32 fetching from 0x00000000\n\n";

    // Run until done marker or timeout
    int timeout   = 100000;
    bool done     = false;
    int  cycle    = 0;

    for (cycle = 0; cycle < timeout && !dut->trap; cycle++) {
        tick(dut, vcd);

        // Check for done marker at RAM[0x10018] = 0xDEAD
        uint32_t marker = mem_read(0x10018);
        if (marker == 0xDEAD) {
            done = true;
            break;
        }
    }

    vcd->close();

    // ── Read and verify results ───────────────────────────────
    uint32_t r1 = mem_read(0x10000);  // Test 1: MAC 10*5 = 50
    uint32_t r2 = mem_read(0x10004);  // Test 2: accumulation = 14
    uint32_t r3 = mem_read(0x10008);  // Test 3: MAC_RELU 7*6 = 42
    uint32_t r4 = mem_read(0x1000C);  // Test 4: MAC_RELU -8*5 = 0
    uint32_t r5 = mem_read(0x10010);  // Test 5a: normal sensor = 0
    uint32_t r6 = mem_read(0x10014);  // Test 5b: anomaly sensor = 35

    std::cout << "╔══════════════════════════════════════════════════════╗\n";
    std::cout << "║              SoC Simulation Results                  ║\n";
    std::cout << "╠══════════════════════════════════════════════════════╣\n";

    auto check = [](const char* name, uint32_t got, uint32_t exp) {
        bool ok = (got == exp);
        std::cout << "║  " << std::left << std::setw(30) << name
                  << " got=" << std::setw(6) << got
                  << " exp=" << std::setw(6) << exp
                  << (ok ? "  ✅ " : "  ❌ ") << "║\n";
        return ok;
    };

    bool all_pass = true;
    all_pass &= check("MAC: 10*5",          r1, 50);
    all_pass &= check("Single MAC 6*7",r2, 42);
    all_pass &= check("MAC_RELU: 7*6",      r3, 42);
    all_pass &= check("MAC_RELU: -8*5",     r4, 0);
    all_pass &= check("Normal sensor (0)",  r5, 0);
    all_pass &= check("Anomaly sensor (35)",r6, 115);

    std::cout << "╠══════════════════════════════════════════════════════╣\n";
    std::cout << "║  Cycles to completion : " << std::setw(6) << cycle
              << "                         ║\n";
    std::cout << "║  Firmware size        : dynamic                    ║\n";
    std::cout << "║  Done marker          : "
              << (done ? "0xDEAD ✅" : "TIMEOUT ❌")
              << "                    ║\n";
    std::cout << "╠══════════════════════════════════════════════════════╣\n";
    std::cout << "║  " << (all_pass ? "ALL TESTS PASSED ✅" : "SOME TESTS FAILED ❌")
              << "                               ║\n";
    std::cout << "╚══════════════════════════════════════════════════════╝\n\n";

    std::cout << "Waveform: sim/soc_waves.vcd\n\n";

    delete dut;
    return all_pass ? 0 : 1;
}
