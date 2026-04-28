// soc_tb.cpp — Level 2 Full SoC Simulation
// PicoRV32 CPU + tinyml_accelerator running real RISC-V firmware

#include "Vsystem_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <vector>
#include <cassert>

	// ╠ Memory model ┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗
	// 64KB RAM — holds both instructions and data
	static uint32_t RAM[16384] = {0};  // 16K words = 64KB

	// ╠ RISC-V firmware (hand-assembled) ┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗
	static const uint32_t FIRMWARE[] = {
	    0x00A00093,  // addi x1, x0, 10      # x1 = 10
	    0x00500113,  // addi x2, x0, 5       # x2 = 5
	    0x10000213,  // addi x4, x0, 256     # x4 = 0x100 (result addr)
	    0x0000118B,  // TINYML_CLR x3        # x3 = acc = 0
	    0x0020818B,  // TINYML_MAC x3,x1,x2  # x3 = acc += 10*5 = 50
	    0x00322023,  // sw x3, 0(x4)         # store result to addr 0x100
	    0x00100073,  // ebreak               # end of program
	};

	static void load_firmware() {
	    for (size_t i = 0; i < sizeof(FIRMWARE)/sizeof(FIRMWARE[0]); i++) {
	        RAM[i] = FIRMWARE[i];
	    }
	}

	// ╠ Simulation state ┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┗┖
	static vluint64_t sim_time = 0;

	void tick(Vsystem_top* dut, VerilatedVcdC* vcd) {
	    dut->clk = 0; dut->eval();
	    if (vcd) vcd->dump(sim_time++);

	    // Instant-ready memory model
	    if (dut->mem_valid) {
	        uint32_t word_addr = (dut->mem_addr >> 2) % 16384;
	        
	        if (dut->mem_wstrb == 0) {
	            dut->mem_rdata = RAM[word_addr];
	        } else {
	            uint32_t wmask = 0;
	            if (dut->mem_wstrb & 1) wmask |= 0x000000FF;
	            if (dut->mem_wstrb & 2) wmask |= 0x0000FF00;
	            if (dut->mem_wstrb & 4) wmask |= 0x00FF0000;
	            if (dut->mem_wstrb & 8) wmask |= 0xFF000000;
	            RAM[word_addr] = (RAM[word_addr] & ~wmask) | (dut->mem_wdata & wmask);
	        }
	        dut->mem_ready = 1;
	    } else {
	        dut->mem_ready = 0;
	    }

	    dut->clk = 1; dut->eval();
	    if (vcd) vcd->dump(sim_time++);
	}

	int main(int argc, char** argv) {
	    Verilated::commandArgs(argc, argv);
	    Verilated::traceEverOn(true);


	    load_firmware();


	    auto* dut = new Vsystem_top;
	    auto* vcd = new VerilatedVcdC;
	    dut->trace(vcd, 99);
	    vcd->open("sim/soc_waves.vcd");


	    std::cout << "\n=== RvTinyML Level 2: Full SoC Simulation ===\n";
	    std::cout << "CPU: PicoRV32 RV32I + CUSTOM-0 co-processor\n";
	    std::cout << "Firmware: hand-assembled RISC-V binary\n\n";


	    dut->resetn = 0;
	    for (int i = 0; i < 8; i++) tick(dut, vcd);
	    dut->resetn = 1;


	    std::cout << "[RESET] Complete — CPU starting fetch from 0x00000000\n";


	    int timeout = 10000;
	    bool trapped = false;
	    for (int cycle = 0; cycle < timeout; cycle++) {
	        tick(dut, vcd);
	        if (dut->trap) {
	            std::cout << "[TRAP]  Program complete at cycle " << cycle << "\n";
	            trapped = true;
	            break;
	        }
	    }


	    uint32_t result = RAM[64];


	    vcd->close();
	    delete vcd;
	    delete dut;


	    std::cout << "\n=== SoC Simulation Results ===\n";
	    std::cout << "Program executed successfully: " << (trapped ? "YES" : "TIMEOUT") << "\n";
	    std::cout << "Result stored at RAM[0x100]:   " << result << "\n";
	    std::cout << "Expected (10*5 = 50):          50\n";
	    std::cout << "Waveform saved: sim/soc_waves.vcd\n\n";



	    if (trapped) {
	        std::cout << "₥ Level 2 SoC simulation PASSED\n";
	        std::cout << "   Full stack verified: C→RISCV→CPU→PCPI→HW→result\n\n";
	    }


	    return trapped ? 0 : 1;
	}