
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
unsigned run_mac(unsigned rs1,unsigned rs2,int relu=0){
    dut->pcpi_valid=1;
    dut->pcpi_insn=relu?4107:11;
    dut->pcpi_rs1=rs1; dut->pcpi_rs2=rs2;
    tick(1);
    unsigned r=dut->pcpi_rd;
    dut->pcpi_valid=0; tick(2);
    return r;
}
int main(){
    dut=new Vtinyml_accelerator;
    dut->clk=0;
    reset();
    run_mac(5,5);dut->pcpi_valid=1;dut->pcpi_insn=19;dut->pcpi_rs1=99;dut->pcpi_rs2=99;tick(2);int ok=(dut->pcpi_ready==0);printf(ok?"PASS ready=0\n":"FAIL ready should be 0 got %d\n",dut->pcpi_ready);
    delete dut;
    return 0;
}
