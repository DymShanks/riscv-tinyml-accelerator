# RvTinyML: RISC-V TinyML Co-Processor

![Status](https://img.shields.io/badge/Status-Silicon_Ready-success)
![Speedup](https://img.shields.io/badge/Speedup-11.6x-brightgreen)

A custom hardware accelerator designed to offload **Matrix Multiplication (MAC)** and **ReLU Activation** from the CPU. It integrates with the **PicoRV32** RISC-V core using the standard **PCPI** interface.

## 🚀 Performance Benchmark
We ran a "Single Neuron" simulation (4-Input Dot Product + ReLU) to compare standard RISC-V software vs. our Hardware Accelerator.

| Method | Cycles | Speedup |
| :--- | :--- | :--- |
| **Software (RISC-V)** | ~140 | 1x (Baseline) |
| **RvTinyML Hardware** | **12** | **~11.6x FASTER** |

## 🧪 Verification Suites
### 1. Functional Verification
Injects basic operands (`10 * 5`) to verify ALU logic.
\`\`\`bash
make verify
\`\`\`

### 2. TinyML Benchmark
Simulates a complete Neuron calculation to measure cycle efficiency.
\`\`\`bash
make benchmark
\`\`\`

## 📂 Project Structure
* \`rtl/\`: SystemVerilog source code.
* \`sim/\`: 
    * \`unit_tb.cpp\`: Basic math verification.
    * \`benchmark_tb.cpp\`: Neuron performance modeling.
* \`firmware/\`: C Driver headers.

## ⚡ Quick Start
1. **Install Tools:** \`sudo apt install verilator gtkwave build-essential\`
2. **Run Benchmark:** \`make benchmark\`
