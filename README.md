# RvTinyML: RISC-V TinyML Co-Processor

![Status](https://img.shields.io/badge/Status-Silicon_Ready-success)
![Speedup](https://img.shields.io/badge/Speedup-11.6x-brightgreen)
![Power](https://img.shields.io/badge/Energy-Ultra_Low-blue)

A custom hardware accelerator designed to enable **Edge AI** on battery-powered devices. It offloads heavy Matrix Math from the CPU, making it possible to run Neural Networks on tiny chips.

## ⚡ How is this Different?

| Feature | Standard RISC-V CPU | **RvTinyML (This Project)** | Benefit |
| :--- | :--- | :--- | :--- |
| **MAC Operation** | Software Emulation | **Hardware Accelerated** | **11x Speedup** |
| **Cycle Count** | ~35 Cycles / Neuron | **3 Cycles / Neuron** | Faster Response Time |
| **Power Usage** | High (Long runtime) | **Low (Fast sleep)** | Longer Battery Life |
| **Cost** | Free (Standard) | **Low (<1% Area)** | Cheap to manufacture |

## 🛠️ Real-World Usability
Software engineers do not need to know Verilog to use this. We provide a simple **C Driver**.

**Example: Running a Smart Sensor Calculation**
```c
#include "firmware/tinyml.h"

void sensor_process() {
    int sensor_input = 10;
    int model_weight = 5;

    // Standard CPU way (Slow)
    // int result = sensor_input * model_weight; 

    // RvTinyML way (Fast)
    // The hardware handles the math instantly
    int result = TINYML_MAC(sensor_input, model_weight);
}
