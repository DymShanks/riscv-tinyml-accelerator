#include "Vtinyml_accelerator.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtinyml_accelerator* dut = new Vtinyml_accelerator;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    dut->trace(tfp, 99);
    tfp->open("sim/unit_test.vcd");

    dut->clk = 0;
    dut->resetn = 0;
    dut->pcpi_valid = 0;

    printf("--- Starting Unit Verification ---\n");

    for (int i = 0; i < 20; i++) {
        dut->clk = !dut->clk;
        if (i == 2) dut->resetn = 1;

        // Inject 10 * 5 at cycle 4
        if (i == 4) {
            dut->pcpi_valid = 1;
            dut->pcpi_insn = 0x0000000B; 
            dut->pcpi_rs1 = 10;
            dut->pcpi_rs2 = 5;
            printf("Injecting: 10 * 5\n");
        }

        if (i == 6) dut->pcpi_valid = 0;

        dut->eval();
        tfp->dump(i);

        if (dut->pcpi_ready && dut->pcpi_valid) {
            printf("Output: %d\n", dut->pcpi_rd);
            if (dut->pcpi_rd == 50) printf(">>> SUCCESS: 10 * 5 = 50 verified! <<<\n");
        }
    }
    tfp->close();
    delete dut;
    return 0;
}
