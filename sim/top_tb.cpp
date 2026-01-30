#include "Vsystem_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vsystem_top* top = new Vsystem_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    top->trace(tfp, 99);
    tfp->open("sim/waveform.vcd");

    top->clk = 0;
    top->resetn = 0;

    // Simulation Loop (500 Cycles)
    for (int i = 0; i < 500; i++) {
        top->clk = !top->clk;
        if (i > 20) top->resetn = 1; // Release Reset
        
        top->eval();
        tfp->dump(i);
    }

    tfp->close();
    printf("Simulation Complete: Waveform generated at sim/waveform.vcd\n");
    delete top;
    return 0;
}
