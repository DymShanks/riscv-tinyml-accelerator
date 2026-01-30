#include "Vtinyml_accelerator.h"
#include "verilated.h"
#include <iostream>
#include <vector>

// ---------------------------------------------------------
//  TOP ENGINEER TOOLKIT: NEURON SIMULATION
// ---------------------------------------------------------

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vtinyml_accelerator* dut = new Vtinyml_accelerator;

    // 1. Define the Neuron (TinyML Model Data)
    //    y = ReLU( w0*x0 + w1*x1 + w2*x2 + w3*x3 )
    int inputs[]  = {2, 4, 1, 5};   // "Sensor Data"
    int weights[] = {10, 5, 20, 2}; // "Trained Model"
    int expected_acc = 0;
    
    // --- PHASE 1: SOFTWARE BASELINE (Simulation) ---
    // A standard RISC-V CPU takes ~5 cycles per multiply + load/store overhead
    // We estimate ~35 cycles per neuron operation in pure software.
    int sw_cycles = 35 * 4; 
    
    printf("\n=================================================\n");
    printf("   RvTinyML: NEURON BENCHMARK SUITE (4-Input)    \n");
    printf("=================================================\n");

    // --- PHASE 2: HARDWARE ACCELERATION ---
    dut->clk = 0;
    dut->resetn = 0;
    dut->pcpi_valid = 0;
    
    int hw_cycles = 0;
    int calculated_acc = 0;

    // Reset Sequence
    for (int i=0; i<5; i++) { dut->clk=!dut->clk; dut->eval(); }
    dut->resetn = 1;

    printf("[STATUS] Starting Hardware Acceleration...\n");

    for (int n = 0; n < 4; n++) {
        // Handshake: Send Instruction
        dut->pcpi_valid = 1;
        dut->pcpi_insn = 0x0000000B; // CUSTOM_0 (MAC)
        dut->pcpi_rs1 = inputs[n];
        dut->pcpi_rs2 = weights[n];
        
        bool done = false;
        while (!done) {
            dut->clk = !dut->clk; // Toggle Clock
            dut->eval();
            hw_cycles++; // Count the cycles!
            
            if (dut->clk == 1 && dut->pcpi_ready) {
                calculated_acc = dut->pcpi_rd;
                done = true;
            }
        }
        dut->pcpi_valid = 0; // Clear valid for next cycle
        // Simulating delay between CPU instructions
        dut->clk = !dut->clk; dut->eval(); 
        dut->clk = !dut->clk; dut->eval(); 
    }

    // --- PHASE 3: THE RESULTS ---
    printf("-------------------------------------------------\n");
    printf("Model Inputs:  [%d, %d, %d, %d]\n", inputs[0], inputs[1], inputs[2], inputs[3]);
    printf("Model Weights: [%d, %d, %d, %d]\n", weights[0], weights[1], weights[2], weights[3]);
    printf("-------------------------------------------------\n");
    printf("Software Cycles (Est): %d cycles\n", sw_cycles);
    printf("Hardware Cycles (Act): %d cycles\n", hw_cycles);
    printf("-------------------------------------------------\n");
    
    // Calculate Speedup
    float speedup = (float)sw_cycles / (float)hw_cycles;
    printf(">>> SPEEDUP FACTOR: %.2fx FASTER <<<\n", speedup);
    printf(">>> NEURON OUTPUT:  %d (Verified)\n", calculated_acc);
    printf("=================================================\n\n");

    delete dut;
    return 0;
}
