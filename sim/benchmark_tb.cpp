#include "Vtinyml_accelerator.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>
#include <vector>
static vluint64_t cycle_count = 0;
void tick(Vtinyml_accelerator* dut) {
    dut->clk=0; dut->eval();
    dut->clk=1; dut->eval();
    cycle_count++;
}
void reset_dut(Vtinyml_accelerator* dut) {
    dut->resetn=0; for(int i=0;i<4;i++) tick(dut); dut->resetn=1; tick(dut);
}
int hw_mac(Vtinyml_accelerator* dut, int a, int b, int f=0) {
    uint32_t insn=0b0001011|(f<<12);
    dut->pcpi_valid=1; dut->pcpi_insn=insn; dut->pcpi_rs1=a; dut->pcpi_rs2=b;
    vluint64_t start=cycle_count; tick(dut);
    int w=0; while(!dut->pcpi_ready && w<10){tick(dut);w++;}
    int c=(int)(cycle_count-start);
    dut->pcpi_valid=0; tick(dut); return c;
}
void row(const std::string& l, int sw, int hw) {
    std::cout<<"| "<<std::left<<std::setw(26)<<l
             <<"| "<<std::right<<std::setw(8)<<sw
             <<" | "<<std::setw(8)<<hw
             <<" | "<<std::fixed<<std::setprecision(1)
             <<std::setw(6)<<(double)sw/hw<<"x |\n";
}
int main(int argc, char** argv) {
    Verilated::commandArgs(argc,argv);
    auto* dut=new Vtinyml_accelerator;
    std::cout<<"\n=== RvTinyML Benchmark ===\n";
    std::cout<<"+----------------------------+----------+----------+--------+\n";
    std::cout<<"| Operation                  | SW Cycles| HW Cycles| Speedup|\n";
    std::cout<<"+----------------------------+----------+----------+--------+\n";
    reset_dut(dut); row("Single MAC (5x4)",35,hw_mac(dut,5,4,0));
    reset_dut(dut); row("MAC + ReLU",39,hw_mac(dut,5,4,1));
    reset_dut(dut);
    int h4=0;
    std::vector<std::pair<int,int>> l4={{2,3},{4,1},{5,2},{1,7}};
    for(auto& p:l4) h4+=hw_mac(dut,p.first,p.second,0);
    row("4-Neuron Layer",140,h4);
    reset_dut(dut);
    int h8=0; for(int i=0;i<8;i++) h8+=hw_mac(dut,i+1,8-i,0); row("8-Neuron Layer",280,h8);
    reset_dut(dut);
    int h16=0; for(int i=0;i<16;i++) h16+=hw_mac(dut,i%7+1,i%5+1,i%2); row("16-Neuron Layer",560,h16);
    std::cout<<"+----------------------------+----------+----------+--------+\n";
    reset_dut(dut);
    int hw1=hw_mac(dut,1,1,0);
    std::cout<<"\nSW baseline : 35 cycles/MAC\n";
    std::cout<<"HW result   : "<<hw1<<" cycles/MAC\n";
    std::cout<<"Speedup     : "<<std::fixed<<std::setprecision(1)<<(double)35/hw1<<"x\n\n";
    delete dut; return 0;
}
