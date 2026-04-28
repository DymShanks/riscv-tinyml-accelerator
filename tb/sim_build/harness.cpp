
#include "Vtinyml_accelerator.h"
#include "verilated.h"
#include <cstdio>

Vtinyml_accelerator* dut;

void tick(int n=1) {
    for(int i=0;i<n*2;i++){dut->clk=!dut->clk;dut->eval();}
}
void reset() {
    dut->resetn=0;dut->pcpi_valid=0;dut->pcpi_insn=0;
    dut->pcpi_rs1=0;dut->pcpi_rs2=0;
    tick(4); dut->resetn=1; tick(2);
}
unsigned run_insn(unsigned rs1, unsigned rs2, unsigned insn){
    dut->pcpi_valid=1;
    dut->pcpi_insn=insn;
    dut->pcpi_rs1=rs1; dut->pcpi_rs2=rs2;
    tick(1);
    unsigned r=dut->pcpi_rd;
    dut->pcpi_valid=0; tick(2);
    return r;
}
unsigned run_mac(unsigned rs1,unsigned rs2,int relu=0){
    return run_insn(rs1,rs2,relu?4107:11);
}
unsigned run_clr(){
    return run_insn(0,0,8203);
}
int main(){
    dut=new Vtinyml_accelerator;
    dut->clk=0;
    reset();
    run_mac(5,5);dut->pcpi_valid=1;dut->pcpi_insn=19;dut->pcpi_rs1=99;dut->pcpi_rs2=99;tick(2);dut->pcpi_valid=0;tick(1);unsigned r=run_mac(0,0);printf(r==25?"PASS %u\n":"FAIL got %u expected 25 (acc preserved)\n",r);
    delete dut;
    return 0;
}
