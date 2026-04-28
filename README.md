# RvTinyML: RISC-V TinyML Co-Processor

![Status](https://img.shields.io/badge/Status-Simulation_Complete-success)
![Speedup](https://img.shields.io/badge/Speedup-35x-brightgreen)
![Accuracy](https://img.shields.io/badge/Inference_Accuracy-100%25-brightgreen)
![Tests](https://img.shields.io/badge/Tests-8%2F8_Passed-brightgreen)

A custom RISC-V ISA extension and co-processor that hardware-accelerates
Multiply-Accumulate (MAC) operations for TinyML inference on PicoRV32.

**Verified results:**
- 35x speedup over software-emulated MAC (1 cycle vs 35 cycles)
- 100% accuracy on 6-sample INT8 anomaly detection inference
- 3-instruction ISA extension: MAC, MAC+ReLU, CLR
- Full Verilator simulation with VCD waveform output

---

## Architecture

PicoRV32 CPU Core
+------------------------------------------+
| PCPI Co-Processor Interface              |
|  pcpi_valid   pcpi_insn[31:0]            |
|  pcpi_rs1     pcpi_rs2                   |
|  pcpi_rd      pcpi_ready   pcpi_wr       |
+--------------------+---------------------+
|
+--------------------v---------------------+
|         tinyml_accelerator.v             |
|                                          |
|  opcode == 0b0001011  (CUSTOM-0)         |
|    funct3=000  MAC:      acc += rs1rs2  |
|    funct3=001  MAC+ReLU: acc += rs1rs2  |
|                          if acc<0: acc=0 |
|    funct3=010  CLR:      acc = 0         |
|                                          |
|  Combinational multiply + accumulate     |
|  Result ready in 1 clock cycle           |
+------------------------------------------+

---

## Performance

| Operation        | SW Cycles | HW Cycles | Speedup |
|------------------|-----------|-----------|---------|
| Single MAC       | 35        | 1         | 35.0x   |
| MAC + ReLU       | 39        | 1         | 39.0x   |
| 4-Neuron Layer   | 140       | 4         | 35.0x   |
| 8-Neuron Layer   | 280       | 8         | 35.0x   |
| 16-Neuron Layer  | 560       | 16        | 35.0x   |

SW baseline: 35 cycles/MAC (shift-and-add, no M extension)
Area overhead: <1% (single combinational multiplier + 32-bit accumulator)

---

## TinyML Inference Demo

A 4→4→1 INT8 quantized neural network for sensor anomaly detection.
Every MAC operation executes on the co-processor via CUSTOM-0 instructions.
Input: {temperature, vibration, pressure, humidity}
Layer 1: 4 neurons with ReLU  (16 MAC ops on hardware)
Layer 2: 1 output neuron      (4 MAC ops on hardware)
Output: anomaly score 0-200

Results on 6-sample test set:

| Sample                    | Score | Result  | Status  |
|---------------------------|-------|---------|---------|
| Normal  - Idle machine    | 0     | Normal  | CORRECT |
| Normal  - Light load      | 0     | Normal  | CORRECT |
| ANOMALY - Overheating     | 87    | ANOMALY | CORRECT |
| ANOMALY - Excess vibration| 146   | ANOMALY | CORRECT |
| Normal  - Cold start      | 0     | Normal  | CORRECT |
| ANOMALY - Pressure spike  | 68    | ANOMALY | CORRECT |

**Accuracy: 6/6 (100%)**

---

## ISA Extension

Custom instructions use RISC-V CUSTOM-0 opcode space (opcode=0b0001011):

| Mnemonic       | funct3 | Operation                        |
|----------------|--------|----------------------------------|
| TINYML_MAC     | 000    | acc += rs1 * rs2                 |
| TINYML_MAC_RELU| 001    | acc += rs1 * rs2; ReLU(acc)      |
| TINYML_CLR     | 010    | acc = 0                          |

---

## Repository Structure
riscv-tinyml-accelerator/
├── rtl/
│   ├── tinyml_accelerator.v   # Co-processor RTL (DUT)
│   └── picorv32.v             # PicoRV32 CPU core
├── sim/
│   ├── waveform_tb.cpp        # GTKWave VCD testbench
│   ├── benchmark_tb.cpp       # Cycle-accurate benchmark
│   ├── demo_inference.cpp     # TinyML anomaly detector
│   ├── benchmark_results.txt  # Benchmark output
│   └── demo_results.txt       # Inference output
├── firmware/
│   ├── tinyml.h               # C driver API macros
│   └── tinyml_model.h         # INT8 model weights
├── results/
│   └── benchmark_results.json # Documented performance numbers
└── Makefile

---

## Quick Start

```bash
# Install dependencies (Ubuntu)
sudo apt-get install -y verilator python3-venv

# Clone and setup
git clone https://github.com/DymShanks/riscv-tinyml-accelerator.git
cd riscv-tinyml-accelerator

# Run waveform simulation
make waveform
# Output: sim/tinyml_waves.vcd  (open with gtkwave)

# Run benchmark
make benchmark

# Run TinyML inference demo
make demo
```

---

## C Driver API

```c
#include "firmware/tinyml.h"

// Accumulate: acc += a * b
int result = TINYML_MAC(sensor_input, weight);

// Accumulate + ReLU: acc += a * b, clamp negative to 0
int result = TINYML_MAC_RELU(sensor_input, weight);

// Clear accumulator
TINYML_CLR_ACC();
```

---

## Applications

| Domain              | Use Case                                      |
|---------------------|-----------------------------------------------|
| Healthcare IoT      | Wearable ECG anomaly on coin-cell battery     |
| Smart Agriculture   | Soil sensor inference without cloud           |
| Industrial          | Motor vibration anomaly detection             |
| Consumer Electronics| Always-on keyword spotting on MCU             |

---

## References

1. Clifford Wolf, PicoRV32 RISC-V Core, GitHub (2024)
2. RISC-V International, The RISC-V Instruction Set Manual (2023)
3. TensorFlow Lite Micro Documentation, Google (2024)
4. Yildirim et al., RISC-V Based TinyML Accelerator, arXiv:2511.21232 (2025)

---

*BTech Final Year Project — Electronics & Communication Engineering*
*Faculty of Engineering and Technology, University of Lucknow, 2025-26*
*Guided by Dr. Anum Khan*
