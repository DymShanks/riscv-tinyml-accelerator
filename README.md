# RvTinyML: RISC-V Co-Processor for TinyML Acceleration

![Status](https://img.shields.io/badge/Status-Simulation_Complete-success)
![Speedup](https://img.shields.io/badge/Speedup-35x-brightgreen)
![Accuracy](https://img.shields.io/badge/Inference_Accuracy-100%25-brightgreen)
![Tests](https://img.shields.io/badge/DV_Tests-8%2F8_Passed-brightgreen)
![Coverage](https://img.shields.io/badge/Sequence_Coverage-62%25-yellow)

> BTech Final Year Project — Electronics & Communication Engineering  
> Faculty of Engineering and Technology, University of Lucknow, 2025-26  
> **Divyam Shankhdhar** | Guided by **Dr. Anum Khan**

---

## The Problem

A standard RISC-V microcontroller takes **35 clock cycles** to perform one
Multiply-Accumulate (MAC) operation — the core math behind every neural network layer.
For a 16-neuron layer that means 560 cycles just for arithmetic.
This makes real-time AI inference impossible on battery-powered IoT devices.

## The Solution

A custom hardware co-processor integrated into PicoRV32 via the PCPI interface.
It introduces 3 new RISC-V instructions under the CUSTOM-0 opcode space:

| Instruction    | funct3 | Operation                     | Latency |
|----------------|--------|-------------------------------|---------|
| TINYML_MAC     | 000    | acc += rs1 × rs2              | 1 cycle |
| TINYML_MAC_RELU| 001    | acc += rs1 × rs2; ReLU(acc)   | 1 cycle |
| TINYML_CLR     | 010    | acc = 0                       | 1 cycle |

**Result: 35x speedup. Every MAC operation goes from 35 cycles to 1.**

---

## Architecture
PicoRV32 CPU Core
+--------------------------------------------------+
|  PCPI Co-Processor Interface                     |
|  pcpi_valid  pcpi_insn[31:0]                     |
|  pcpi_rs1    pcpi_rs2                            |
|  pcpi_rd     pcpi_ready    pcpi_wr               |
+----------------------+---------------------------+
|
+----------------------v---------------------------+
|           tinyml_accelerator.v                  |
|                                                  |
|  Decode: opcode == 7'b0001011  (CUSTOM-0)        |
|                                                  |
|  wire product = pcpi_rs1 * pcpi_rs2  ← comb.    |
|  wire sum     = accumulator + product ← comb.   |
|  wire relu    = sum[31] ? 0 : sum     ← comb.   |
|                                                  |
|  funct3=000 → acc = sum        (MAC)             |
|  funct3=001 → acc = relu       (MAC+ReLU)        |
|  funct3=010 → acc = 0          (CLR)             |
|                                                  |
|  Result ready in 1 clock cycle (combinational)   |
+--------------------------------------------------+

Key design decision: multiply and accumulate are **combinational wires**,
not registered pipelines. This gives 1-cycle latency at the cost of a
longer critical path — acceptable for the low clock frequencies used in
TinyML edge devices.

---

## Performance Results

Measured by cycle-accurate Verilator simulation (`sim/benchmark_tb.cpp`):

| Operation         | SW Cycles | HW Cycles | Speedup |
|-------------------|-----------|-----------|---------|
| Single MAC        | 35        | 1         | 35.0x   |
| MAC + ReLU        | 39        | 1         | 39.0x   |
| 4-Neuron Layer    | 140       | 4         | 35.0x   |
| 8-Neuron Layer    | 280       | 8         | 35.0x   |
| 16-Neuron Layer   | 560       | 16        | 35.0x   |

SW baseline: 35 cycles/MAC = shift-and-add emulation without M extension.  
Area overhead: <1% (single combinational multiplier + 32-bit accumulator register).

---

## TinyML Inference: Sensor Anomaly Detector

A complete 2-layer INT8 quantized neural network running on the co-processor.
Detects equipment anomalies from 4 sensor inputs:
`{temperature, vibration, pressure, humidity}`
Input layer  (4 values)
↓
Hidden layer (4 neurons, ReLU activation)   ← 16 MAC ops on hardware
↓
Output layer (1 neuron, anomaly score)      ←  4 MAC ops on hardware
↓
Score > 0 → ANOMALY detected

Each neuron is a **dedicated anomaly detector**:
- Neuron 0: temperature spike (>50°C)
- Neuron 1: vibration spike (>30 units)
- Neuron 2: pressure spike (>65 units)
- Neuron 3: combined stress (all sensors elevated together)

**Results on 6-sample test set** (`make demo`):

| Sample                     | Score | Classification | Status  |
|----------------------------|-------|----------------|---------|
| Normal  — Idle machine     | 0     | Normal         | CORRECT |
| Normal  — Light load       | 0     | Normal         | CORRECT |
| ANOMALY — Overheating      | 87    | ANOMALY        | CORRECT |
| ANOMALY — Excess vibration | 146   | ANOMALY        | CORRECT |
| Normal  — Cold start       | 0     | Normal         | CORRECT |
| ANOMALY — Pressure spike   | 68    | ANOMALY        | CORRECT |

**Accuracy: 6/6 (100%)** | SW cycles: 7980 | HW cycles: 228 | Speedup: 35x

---

## Verification: Python DV Testbench

`tb/test_tinyml.py` is a full Python-driven verification environment.
It compiles a fresh Verilator harness per test, runs it, and parses stdout.

**8 directed tests covering:**

| Test | What it verifies |
|------|-----------------|
| Basic MAC: 10×5=50 | Correct multiply-accumulate |
| Accumulation: 4 inputs → 70 | Multi-cycle accumulation |
| ReLU clamps negative → 0 | Negative activation suppression |
| ReLU passes positive unchanged | Positive activation passthrough |
| Zero input: 0×999=0 | Zero operand handling |
| PCPI handshake signals | pcpi_ready and pcpi_wr assert correctly |
| Reset clears accumulator | Mid-sequence reset behaviour |
| NOP instruction ignored | Wrong opcode does not trigger co-processor |

Run with:
```bash
source .venv/bin/activate
make dv
```

Expected output:
PASS  basic MAC: 105=50
PASS  accumulation: neuron=70
PASS  ReLU clamps negative to 0
PASS  ReLU passes positive unchanged
PASS  zero input: 0999=0
PASS  pcpi handshake signals assert
PASS  reset clears accumulator
PASS  NOP instruction ignored
Results: 8/8 passed

---

## AI-Assisted Coverage Analysis

`tools/coverage_analyser.py` applies **Isolation Forest** (scikit-learn)
to the instruction sequence coverage log produced by the DV testbench.

The ML model treats each instruction sequence as a feature vector and
flags statistically anomalous sequences — those that are hit far less
than expected given their characteristics. This surfaces coverage gaps
that manual inspection would miss.
Total sequences tracked : 13
Covered                 : 8   (62%)
Never hit               : 4
Anomalous (ML-flagged)  : 1
[NEVER HIT] — suggested next tests:
• MAC|boundary_max_value
• MAC|back_to_back_instructions
• MAC_RELU|zero_boundary
• NOP|during_valid_sequence

Output: `tools/coverage_heatmap.png` — visual heatmap of all sequences.

Run with:
```bash
source .venv/bin/activate
make coverage
```

---

## GTKWave Waveform

`make waveform` generates `sim/tinyml_waves.vcd`.

Key signals to observe in GTKWave:

| Signal | What it shows |
|--------|--------------|
| `clk` | System clock |
| `pcpi_valid` | CPU dispatching a CUSTOM-0 instruction |
| `pcpi_insn[31:0]` | Raw instruction word (opcode visible) |
| `pcpi_rs1`, `pcpi_rs2` | Operands a and b |
| `pcpi_ready` | Co-processor result ready (1 cycle later) |
| `pcpi_rd[31:0]` | Accumulator output |

**Key observation:** `pcpi_valid` → `pcpi_ready` is exactly **1 clock cycle**,
proving the combinational multiply-accumulate architecture.

---

## C Driver API

Software engineers use the co-processor without knowing Verilog:

```c
#include "firmware/tinyml.h"

// Single MAC: acc += a * b
int result = TINYML_MAC(sensor_input, weight);

// MAC + ReLU: acc += a * b, negative clamped to 0
int result = TINYML_MAC_RELU(sensor_input, weight);

// Clear accumulator before new neuron
TINYML_CLR_ACC();

// Example: 3-input neuron with ReLU activation
TINYML_CLR_ACC();
TINYML_MAC(sensor_a, weight_a);
TINYML_MAC(sensor_b, weight_b);
int activation = TINYML_MAC_RELU(sensor_c, weight_c);
```

---

## Repository Structure
riscv-tinyml-accelerator/
├── rtl/
│   ├── tinyml_accelerator.v     # Co-processor RTL — DUT
│   │                              3 instructions: MAC, MAC+ReLU, CLR
│   │                              Combinational multiply, 1-cycle latency
│   └── picorv32.v               # PicoRV32 RV32I base core
│
├── sim/
│   ├── waveform_tb.cpp          # Verilator testbench → .vcd for GTKWave
│   ├── benchmark_tb.cpp         # Cycle-accurate SW vs HW comparison
│   ├── demo_inference.cpp       # 4→4→1 INT8 anomaly detector
│   ├── benchmark_results.txt    # Benchmark output (35x verified)
│   └── demo_results.txt         # Inference output (6/6 correct)
│
├── tb/
│   ├── test_tinyml.py           # Python DV testbench (8 directed tests)
│   ├── results.json             # Pass/fail per test (machine-readable)
│   └── coverage.log             # Instruction sequence hit counts
│
├── tools/
│   ├── coverage_analyser.py     # Isolation Forest coverage analysis
│   ├── coverage_report.json     # ML-flagged sequences (machine-readable)
│   ├── coverage_heatmap.png     # Visual coverage heatmap
│   └── requirements.txt         # Python dependencies
│
├── firmware/
│   ├── tinyml.h                 # C driver API macros
│   └── tinyml_model.h           # INT8 model weights + forward pass
│
├── results/
│   └── benchmark_results.json   # Documented performance numbers
│
└── Makefile                     # All build targets

---

## Quick Start

```bash
# Prerequisites
sudo apt-get install -y verilator gtkwave python3-venv

# Clone
git clone https://github.com/DymShanks/riscv-tinyml-accelerator.git
cd riscv-tinyml-accelerator

# Python environment
python3 -m venv .venv && source .venv/bin/activate
pip install -r tools/requirements.txt

# Run everything
make waveform    # → sim/tinyml_waves.vcd
make benchmark   # → cycle comparison table
make demo        # → anomaly detector inference
make dv          # → 8/8 Python DV tests
make coverage    # → AI coverage heatmap
```

---

## Innovation Points

| What | Why it matters |
|------|---------------|
| 3-instruction ISA extension in CUSTOM-0 space | Standard RISC-V extension methodology |
| Combinational MAC — 1 cycle latency | Optimal for low-clock IoT edge devices |
| CLR instruction for neuron isolation | Enables correct multi-neuron inference |
| Python DV testbench with JSON results | Professional verification methodology |
| Isolation Forest coverage analysis | AI-assisted DV — novel at BTech level |
| Complete INT8 inference on hardware | End-to-end TinyML, not just a MAC unit |

---

## Future Scope

- Port to FPGA (Xilinx Artix-7 / Lattice iCE40)
- Add CONV2D instruction for CNN acceleration
- Integrate with actual TensorFlow Lite Micro runtime
- Measure real power consumption on FPGA
- Extend to 8-bit SIMD (4× MACs per cycle)

---

## References

1. Clifford Wolf, *PicoRV32 RISC-V Core*, GitHub (2024)
2. RISC-V International, *The RISC-V Instruction Set Manual* Vol I-II (2023)
3. TensorFlow Lite Micro Documentation, Google (2024)
4. S. Banerjee et al., *Custom Hardware Accelerators for Edge AI*, IEEE Access (2023)
5. Yildirim et al., *RISC-V Based TinyML Accelerator*, arXiv:2511.21232 (2025)
