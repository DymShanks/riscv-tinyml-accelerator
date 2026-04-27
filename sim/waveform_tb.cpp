#include "Vtinyml_accelerator.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <cassert>
static vluint64_t sim_time = 0;
void tick(Vtinyml_accelerator* dut, VerilatedVcdC* vcd) {
    dut->clk = 0; dut->eval(); if (vcd) vcd->dump(sim_time++);
    dut->clk = 1; dut->eval(); if (vcd) vcd->dump(sim_time++);
}
void send_insn(Vtinyml_accelerator* dut, VerilatedVcdC* vcd, int rs1, int rs2, int funct3=0) {
    uint32_t insn = 0b0001011 | (funct3 << 12);
    dut->pcpi_valid=1; dut->pcpi_insn=insn; dut->pcpi_rs1=rs1; dut->pcpi_rs2=rs2;
    tick(dut,vcd);
    for (int i=0; i<4 && !dut->pcpi_ready; i++) tick(dut,vcd);
    dut->pcpi_valid=0; tick(dut,vcd);
}
int main(int argc, char** argv) {
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true);
    auto* dut = new Vtinyml_accelerator;
    auto* vcd = new VerilatedVcdC;
    dut->trace(vcd,99);
    vcd->open("sim/tinyml_waves.vcd");
    dut->resetn=0; dut->pcpi_valid=0;
    for(int i=0;i<4;i++) tick(dut,vcd);
    dut->resetn=1; tick(dut,vcd);
    std::cout<<"[RESET] Complete\n";
    send_insn(dut,vcd,5,4,0);
    std::cout<<"[MAC]   5x4 -> acc="<<(int)dut->pcpi_rd<<" (expected 20)\n";
    assert((int)dut->pcpi_rd==20);
    send_insn(dut,vcd,3,10,0);
    std::cout<<"[MAC]   3x10 -> acc="<<(int)dut->pcpi_rd<<" (expected 50)\n";
    assert((int)dut->pcpi_rd==50);
    send_insn(dut,vcd,2,5,1);
    std::cout<<"[RELU+] 2x5 -> acc="<<(int)dut->pcpi_rd<<" (expected 60)\n";
    assert((int)dut->pcpi_rd==60);
    dut->resetn=0; tick(dut,vcd); dut->resetn=1; tick(dut,vcd);
    send_insn(dut,vcd,-7,3,1);
    std::cout<<"[RELU-] -7x3 -> acc="<<(int)dut->pcpi_rd<<" (expected 0)\n";
    assert((int)dut->pcpi_rd==0);
    dut->pcpi_valid=1; dut->pcpi_insn=0x00000013; dut->pcpi_rs1=99; dut->pcpi_rs2=99;
    tick(dut,vcd); tick(dut,vcd);
    std::cout<<"[NOP]   wrong opcode -> pcpi_ready="<<(int)dut->pcpi_ready<<" (expected 0)\n";
    assert(dut->pcpi_ready==0);
    dut->pcpi_valid=0;
    for(int i=0;i<10;i++) tick(dut,vcd);
    vcd->close(); delete vcd; delete dut;
    std::cout<<"\nAll assertions passed.\n";
    std::cout<<"Waveform saved -> sim/tinyml_waves.vcd\n";
    return 0;
}
