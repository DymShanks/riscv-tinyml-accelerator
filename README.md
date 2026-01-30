# RvTinyML: RISC-V TinyML Co-Processor

![Status](https://img.shields.io/badge/Status-Silicon_Ready-success)
![Verification](https://img.shields.io/badge/Verification-Verilator-blue)

A custom hardware accelerator designed to offload **Matrix Multiplication (MAC)** and **ReLU Activation** from the CPU. It integrates with the **PicoRV32** RISC-V core using the standard **PCPI (Pico Co-Processor Interface)**.

## 🚀 Key Features
* **Single-Cycle MAC:** Calculates `Acc + (A * B)` in 1 clock cycle.
* **Hardware ReLU:** Zero-overhead activation function logic.
* **Standard Compliant:** Plug-and-play compatible with any PCPI-enabled RISC-V core.

## 🧪 Verification & Results
The design has been verified using a C++ testbench in Verilator.

### 1. Functional Verification
The Unit Test injects operands (`10` and `5`) and verifies the output (`50`).
```text
--- Starting Unit Verification ---
Injecting: 10 * 5
Output: 50
>>> SUCCESS: 10 * 5 = 50 verified! <<<
