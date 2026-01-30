// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystem_top__Syms.h"


VL_ATTR_COLD void Vsystem_top___024root__trace_init_sub__TOP__0(Vsystem_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("system_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"pcpi_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"pcpi_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pcpi_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pcpi_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"pcpi_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"pcpi_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"pcpi_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"pcpi_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("accelerator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"pcpi_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"pcpi_insn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pcpi_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pcpi_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"pcpi_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"pcpi_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"pcpi_wait",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"pcpi_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+216,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+217,0,"is_custom_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"is_relu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"next_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+245,0,"ENABLE_COUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"ENABLE_COUNTERS64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"ENABLE_REGS_16_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"ENABLE_REGS_DUALPORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"LATCHED_MEM_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"TWO_STAGE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"BARREL_SHIFTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"TWO_CYCLE_COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"TWO_CYCLE_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"COMPRESSED_ISA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"CATCH_MISALIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"CATCH_ILLINSN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"ENABLE_PCPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"ENABLE_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"ENABLE_FAST_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"ENABLE_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"ENABLE_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"ENABLE_IRQ_QREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"ENABLE_IRQ_TIMER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"ENABLE_TRACE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"REGS_INIT_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+247,0,"MASKED_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"LATCHED_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"PROGADDR_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"PROGADDR_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"STACKADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"mem_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"mem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+250,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+239,0,"mem_la_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"mem_la_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"mem_la_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"mem_la_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"mem_la_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+212,0,"pcpi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"pcpi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pcpi_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pcpi_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"pcpi_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"pcpi_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"pcpi_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"pcpi_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"eoi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"trace_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+9,0,"trace_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+252,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+253,0,"irq_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+254,0,"irq_buserror",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+255,0,"irqregs_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+255,0,"regfile_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+256,0,"regindex_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+245,0,"WITH_PCPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+257,0,"TRACE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+259,0,"TRACE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+261,0,"TRACE_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+11,0,"count_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"count_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"reg_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"reg_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"reg_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"reg_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"reg_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"next_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"dbg_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"dbg_insn_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+214,0,"dbg_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"dbg_mem_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"dbg_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"dbg_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"dbg_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"dbg_mem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+250,0,"dbg_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"irq_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"irq_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"irq_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"irq_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cpuregs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+263,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+264,0,"pcpi_mul_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"pcpi_mul_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+264,0,"pcpi_mul_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"pcpi_mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"pcpi_div_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"pcpi_div_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+264,0,"pcpi_div_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"pcpi_div_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"pcpi_int_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"pcpi_int_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"pcpi_int_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"pcpi_int_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"mem_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"mem_wordsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"mem_rdata_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"mem_rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+224,0,"mem_do_prefetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"mem_do_rinst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"mem_do_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"mem_do_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"mem_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"mem_la_secondword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"mem_la_firstword_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"last_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"mem_la_firstword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"mem_la_firstword_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"clear_prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"mem_16bit_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+229,0,"mem_rdata_latched_noshuffle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"mem_rdata_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+264,0,"mem_la_use_prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"mem_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"mem_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"instr_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"instr_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"instr_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"instr_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"instr_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"instr_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"instr_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"instr_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"instr_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"instr_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"instr_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"instr_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"instr_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"instr_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"instr_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"instr_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"instr_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"instr_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"instr_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"instr_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"instr_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"instr_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"instr_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"instr_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"instr_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"instr_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"instr_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"instr_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"instr_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"instr_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"instr_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"instr_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"instr_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"instr_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"instr_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"instr_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"instr_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"instr_rdcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"instr_rdcycleh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"instr_rdinstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"instr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"instr_ecall_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"instr_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"instr_getq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"instr_setq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"instr_retirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"instr_maskirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"instr_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"instr_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"instr_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"decoded_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+116,0,"decoded_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"decoded_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+118,0,"decoded_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"decoded_imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+231,0,"decoder_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"decoder_trigger_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"decoder_pseudo_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"decoder_pseudo_trigger_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"compressed_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"is_lui_auipc_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"is_lb_lh_lw_lbu_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"is_slli_srli_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"is_jalr_addi_slti_sltiu_xori_ori_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"is_sb_sh_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"is_sll_srl_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"is_lui_auipc_jal_jalr_addi_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"is_slti_blt_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"is_sltiu_bltu_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"is_beq_bne_blt_bge_bltu_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"is_lbu_lhu_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"is_alu_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"is_alu_reg_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"is_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"is_rdcycle_rdcycleh_rdinstr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+137,0,"new_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+139,0,"dbg_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+141,0,"dbg_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"dbg_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"dbg_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+144,0,"dbg_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+145,0,"dbg_rs1val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"dbg_rs2val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"dbg_rs1val_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"dbg_rs2val_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+149,0,"q_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+151,0,"q_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"q_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"q_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,0,"q_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,0,"q_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+156,0,"dbg_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"launch_next_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"dbg_valid_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+158,0,"cached_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+160,0,"cached_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"cached_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"cached_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"cached_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"cached_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+266,0,"cpu_state_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+267,0,"cpu_state_fetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+268,0,"cpu_state_ld_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+269,0,"cpu_state_ld_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"cpu_state_exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+271,0,"cpu_state_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"cpu_state_stmem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+273,0,"cpu_state_ldmem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+165,0,"cpu_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"irq_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+167,0,"dbg_ascii_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+171,0,"set_mem_do_rinst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"set_mem_do_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"set_mem_do_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"latched_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"latched_stalu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"latched_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"latched_compr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"latched_trace",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"latched_is_lu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"latched_is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"latched_is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"latched_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+183,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"pcpi_timeout_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+185,0,"pcpi_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"next_irq_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+187,0,"do_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"alu_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+190,0,"alu_out_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"alu_out_0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"alu_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"alu_wait_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"alu_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"alu_shl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"alu_shr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"alu_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"alu_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"alu_lts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"clear_prefetched_high_word_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"cpuregs_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"cpuregs_wrdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"cpuregs_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"cpuregs_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,0,"decoded_rs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsystem_top___024root__trace_init_top(Vsystem_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_init_top\n"); );
    // Body
    Vsystem_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsystem_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsystem_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystem_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystem_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsystem_top___024root__trace_register(Vsystem_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vsystem_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsystem_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsystem_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsystem_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsystem_top___024root__trace_const_0_sub_0(Vsystem_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystem_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_const_0\n"); );
    // Init
    Vsystem_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystem_top___024root*>(voidSelf);
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsystem_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystem_top___024root__trace_const_0_sub_0(Vsystem_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+244,(1U));
    bufp->fullBit(oldp+245,(1U));
    bufp->fullBit(oldp+246,(0U));
    bufp->fullIData(oldp+247,(0U),32);
    bufp->fullIData(oldp+248,(0xffffffffU),32);
    bufp->fullIData(oldp+249,(0x10U),32);
    bufp->fullIData(oldp+250,(vlSelf->system_top__DOT__cpu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+251,(vlSelf->system_top__DOT__cpu__DOT__irq),32);
    bufp->fullIData(oldp+252,(0U),32);
    bufp->fullIData(oldp+253,(1U),32);
    bufp->fullIData(oldp+254,(2U),32);
    bufp->fullIData(oldp+255,(0x20U),32);
    bufp->fullIData(oldp+256,(5U),32);
    bufp->fullQData(oldp+257,(0x100000000ULL),36);
    bufp->fullQData(oldp+259,(0x200000000ULL),36);
    bufp->fullQData(oldp+261,(0x800000000ULL),36);
    bufp->fullIData(oldp+263,(vlSelf->system_top__DOT__cpu__DOT__i),32);
    bufp->fullBit(oldp+264,(0U));
    bufp->fullSData(oldp+265,(vlSelf->system_top__DOT__cpu__DOT__mem_16bit_buffer),16);
    bufp->fullCData(oldp+266,(0x80U),8);
    bufp->fullCData(oldp+267,(0x40U),8);
    bufp->fullCData(oldp+268,(0x20U),8);
    bufp->fullCData(oldp+269,(0x10U),8);
    bufp->fullCData(oldp+270,(8U),8);
    bufp->fullCData(oldp+271,(4U),8);
    bufp->fullCData(oldp+272,(2U),8);
    bufp->fullCData(oldp+273,(1U),8);
    bufp->fullCData(oldp+274,(0U),5);
}

VL_ATTR_COLD void Vsystem_top___024root__trace_full_0_sub_0(Vsystem_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystem_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_full_0\n"); );
    // Init
    Vsystem_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystem_top___024root*>(voidSelf);
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsystem_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystem_top___024root__trace_full_0_sub_0(Vsystem_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->system_top__DOT__cpu__DOT__reg_op1),32);
    bufp->fullIData(oldp+2,(vlSelf->system_top__DOT__cpu__DOT__reg_op2),32);
    bufp->fullIData(oldp+3,((vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                             * vlSelf->system_top__DOT__cpu__DOT__reg_op2)),32);
    bufp->fullIData(oldp+4,(vlSelf->system_top__DOT__cpu__DOT__mem_addr),32);
    bufp->fullIData(oldp+5,(vlSelf->system_top__DOT__cpu__DOT__mem_wdata),32);
    bufp->fullIData(oldp+6,(vlSelf->system_top__DOT__cpu__DOT__mem_la_wdata),32);
    bufp->fullIData(oldp+7,(vlSelf->system_top__DOT__cpu__DOT__eoi),32);
    bufp->fullBit(oldp+8,(vlSelf->system_top__DOT__cpu__DOT__trace_valid));
    bufp->fullQData(oldp+9,(vlSelf->system_top__DOT__cpu__DOT__trace_data),36);
    bufp->fullQData(oldp+11,(vlSelf->system_top__DOT__cpu__DOT__count_cycle),64);
    bufp->fullQData(oldp+13,(vlSelf->system_top__DOT__cpu__DOT__count_instr),64);
    bufp->fullIData(oldp+15,(vlSelf->system_top__DOT__cpu__DOT__reg_pc),32);
    bufp->fullIData(oldp+16,(vlSelf->system_top__DOT__cpu__DOT__reg_next_pc),32);
    bufp->fullIData(oldp+17,(vlSelf->system_top__DOT__cpu__DOT__reg_out),32);
    bufp->fullCData(oldp+18,(vlSelf->system_top__DOT__cpu__DOT__reg_sh),5);
    bufp->fullIData(oldp+19,(vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode),32);
    bufp->fullIData(oldp+20,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode),32);
    bufp->fullIData(oldp+21,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_addr),32);
    bufp->fullIData(oldp+22,(vlSelf->system_top__DOT__cpu__DOT__next_pc),32);
    bufp->fullBit(oldp+23,(vlSelf->system_top__DOT__cpu__DOT__irq_delay));
    bufp->fullBit(oldp+24,(vlSelf->system_top__DOT__cpu__DOT__irq_active));
    bufp->fullIData(oldp+25,(vlSelf->system_top__DOT__cpu__DOT__irq_mask),32);
    bufp->fullIData(oldp+26,(vlSelf->system_top__DOT__cpu__DOT__irq_pending),32);
    bufp->fullIData(oldp+27,(vlSelf->system_top__DOT__cpu__DOT__timer),32);
    bufp->fullIData(oldp+28,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[0]),32);
    bufp->fullIData(oldp+29,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[1]),32);
    bufp->fullIData(oldp+30,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[2]),32);
    bufp->fullIData(oldp+31,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[3]),32);
    bufp->fullIData(oldp+32,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[4]),32);
    bufp->fullIData(oldp+33,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[5]),32);
    bufp->fullIData(oldp+34,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[6]),32);
    bufp->fullIData(oldp+35,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[7]),32);
    bufp->fullIData(oldp+36,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[8]),32);
    bufp->fullIData(oldp+37,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[9]),32);
    bufp->fullIData(oldp+38,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[10]),32);
    bufp->fullIData(oldp+39,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[11]),32);
    bufp->fullIData(oldp+40,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[12]),32);
    bufp->fullIData(oldp+41,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[13]),32);
    bufp->fullIData(oldp+42,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[14]),32);
    bufp->fullIData(oldp+43,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[15]),32);
    bufp->fullIData(oldp+44,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[16]),32);
    bufp->fullIData(oldp+45,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[17]),32);
    bufp->fullIData(oldp+46,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[18]),32);
    bufp->fullIData(oldp+47,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[19]),32);
    bufp->fullIData(oldp+48,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[20]),32);
    bufp->fullIData(oldp+49,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[21]),32);
    bufp->fullIData(oldp+50,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[22]),32);
    bufp->fullIData(oldp+51,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[23]),32);
    bufp->fullIData(oldp+52,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[24]),32);
    bufp->fullIData(oldp+53,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[25]),32);
    bufp->fullIData(oldp+54,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[26]),32);
    bufp->fullIData(oldp+55,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[27]),32);
    bufp->fullIData(oldp+56,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[28]),32);
    bufp->fullIData(oldp+57,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[29]),32);
    bufp->fullIData(oldp+58,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[30]),32);
    bufp->fullIData(oldp+59,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[31]),32);
    bufp->fullCData(oldp+60,(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize),2);
    bufp->fullIData(oldp+61,(vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word),32);
    bufp->fullBit(oldp+62,(vlSelf->system_top__DOT__cpu__DOT__mem_la_firstword_reg));
    bufp->fullBit(oldp+63,(vlSelf->system_top__DOT__cpu__DOT__last_mem_valid));
    bufp->fullBit(oldp+64,(vlSelf->system_top__DOT__cpu__DOT__prefetched_high_word));
    bufp->fullBit(oldp+65,(vlSelf->system_top__DOT__cpu__DOT__instr_lui));
    bufp->fullBit(oldp+66,(vlSelf->system_top__DOT__cpu__DOT__instr_auipc));
    bufp->fullBit(oldp+67,(vlSelf->system_top__DOT__cpu__DOT__instr_jal));
    bufp->fullBit(oldp+68,(vlSelf->system_top__DOT__cpu__DOT__instr_jalr));
    bufp->fullBit(oldp+69,(vlSelf->system_top__DOT__cpu__DOT__instr_beq));
    bufp->fullBit(oldp+70,(vlSelf->system_top__DOT__cpu__DOT__instr_bne));
    bufp->fullBit(oldp+71,(vlSelf->system_top__DOT__cpu__DOT__instr_blt));
    bufp->fullBit(oldp+72,(vlSelf->system_top__DOT__cpu__DOT__instr_bge));
    bufp->fullBit(oldp+73,(vlSelf->system_top__DOT__cpu__DOT__instr_bltu));
    bufp->fullBit(oldp+74,(vlSelf->system_top__DOT__cpu__DOT__instr_bgeu));
    bufp->fullBit(oldp+75,(vlSelf->system_top__DOT__cpu__DOT__instr_lb));
    bufp->fullBit(oldp+76,(vlSelf->system_top__DOT__cpu__DOT__instr_lh));
    bufp->fullBit(oldp+77,(vlSelf->system_top__DOT__cpu__DOT__instr_lw));
    bufp->fullBit(oldp+78,(vlSelf->system_top__DOT__cpu__DOT__instr_lbu));
    bufp->fullBit(oldp+79,(vlSelf->system_top__DOT__cpu__DOT__instr_lhu));
    bufp->fullBit(oldp+80,(vlSelf->system_top__DOT__cpu__DOT__instr_sb));
    bufp->fullBit(oldp+81,(vlSelf->system_top__DOT__cpu__DOT__instr_sh));
    bufp->fullBit(oldp+82,(vlSelf->system_top__DOT__cpu__DOT__instr_sw));
    bufp->fullBit(oldp+83,(vlSelf->system_top__DOT__cpu__DOT__instr_addi));
    bufp->fullBit(oldp+84,(vlSelf->system_top__DOT__cpu__DOT__instr_slti));
    bufp->fullBit(oldp+85,(vlSelf->system_top__DOT__cpu__DOT__instr_sltiu));
    bufp->fullBit(oldp+86,(vlSelf->system_top__DOT__cpu__DOT__instr_xori));
    bufp->fullBit(oldp+87,(vlSelf->system_top__DOT__cpu__DOT__instr_ori));
    bufp->fullBit(oldp+88,(vlSelf->system_top__DOT__cpu__DOT__instr_andi));
    bufp->fullBit(oldp+89,(vlSelf->system_top__DOT__cpu__DOT__instr_slli));
    bufp->fullBit(oldp+90,(vlSelf->system_top__DOT__cpu__DOT__instr_srli));
    bufp->fullBit(oldp+91,(vlSelf->system_top__DOT__cpu__DOT__instr_srai));
    bufp->fullBit(oldp+92,(vlSelf->system_top__DOT__cpu__DOT__instr_add));
    bufp->fullBit(oldp+93,(vlSelf->system_top__DOT__cpu__DOT__instr_sub));
    bufp->fullBit(oldp+94,(vlSelf->system_top__DOT__cpu__DOT__instr_sll));
    bufp->fullBit(oldp+95,(vlSelf->system_top__DOT__cpu__DOT__instr_slt));
    bufp->fullBit(oldp+96,(vlSelf->system_top__DOT__cpu__DOT__instr_sltu));
    bufp->fullBit(oldp+97,(vlSelf->system_top__DOT__cpu__DOT__instr_xor));
    bufp->fullBit(oldp+98,(vlSelf->system_top__DOT__cpu__DOT__instr_srl));
    bufp->fullBit(oldp+99,(vlSelf->system_top__DOT__cpu__DOT__instr_sra));
    bufp->fullBit(oldp+100,(vlSelf->system_top__DOT__cpu__DOT__instr_or));
    bufp->fullBit(oldp+101,(vlSelf->system_top__DOT__cpu__DOT__instr_and));
    bufp->fullBit(oldp+102,(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycle));
    bufp->fullBit(oldp+103,(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycleh));
    bufp->fullBit(oldp+104,(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstr));
    bufp->fullBit(oldp+105,(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstrh));
    bufp->fullBit(oldp+106,(vlSelf->system_top__DOT__cpu__DOT__instr_ecall_ebreak));
    bufp->fullBit(oldp+107,(vlSelf->system_top__DOT__cpu__DOT__instr_fence));
    bufp->fullBit(oldp+108,(vlSelf->system_top__DOT__cpu__DOT__instr_getq));
    bufp->fullBit(oldp+109,(vlSelf->system_top__DOT__cpu__DOT__instr_setq));
    bufp->fullBit(oldp+110,(vlSelf->system_top__DOT__cpu__DOT__compressed_instr));
    bufp->fullBit(oldp+111,(vlSelf->system_top__DOT__cpu__DOT__instr_maskirq));
    bufp->fullBit(oldp+112,(vlSelf->system_top__DOT__cpu__DOT__instr_waitirq));
    bufp->fullBit(oldp+113,(vlSelf->system_top__DOT__cpu__DOT__instr_timer));
    bufp->fullBit(oldp+114,(vlSelf->system_top__DOT__cpu__DOT__instr_trap));
    bufp->fullCData(oldp+115,(vlSelf->system_top__DOT__cpu__DOT__decoded_rd),5);
    bufp->fullCData(oldp+116,(vlSelf->system_top__DOT__cpu__DOT__decoded_rs1),5);
    bufp->fullCData(oldp+117,(vlSelf->system_top__DOT__cpu__DOT__decoded_rs2),5);
    bufp->fullIData(oldp+118,(vlSelf->system_top__DOT__cpu__DOT__decoded_imm),32);
    bufp->fullIData(oldp+119,(vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j),32);
    bufp->fullBit(oldp+120,(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger_q));
    bufp->fullBit(oldp+121,(vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger_q));
    bufp->fullBit(oldp+122,(vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal));
    bufp->fullBit(oldp+123,(vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu));
    bufp->fullBit(oldp+124,(vlSelf->system_top__DOT__cpu__DOT__is_slli_srli_srai));
    bufp->fullBit(oldp+125,(vlSelf->system_top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
    bufp->fullBit(oldp+126,(vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw));
    bufp->fullBit(oldp+127,(vlSelf->system_top__DOT__cpu__DOT__is_sll_srl_sra));
    bufp->fullBit(oldp+128,(vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
    bufp->fullBit(oldp+129,(vlSelf->system_top__DOT__cpu__DOT__is_slti_blt_slt));
    bufp->fullBit(oldp+130,(vlSelf->system_top__DOT__cpu__DOT__is_sltiu_bltu_sltu));
    bufp->fullBit(oldp+131,(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu));
    bufp->fullBit(oldp+132,(vlSelf->system_top__DOT__cpu__DOT__is_lbu_lhu_lw));
    bufp->fullBit(oldp+133,(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm));
    bufp->fullBit(oldp+134,(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg));
    bufp->fullBit(oldp+135,(vlSelf->system_top__DOT__cpu__DOT__is_compare));
    bufp->fullBit(oldp+136,(vlSelf->system_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
    bufp->fullQData(oldp+137,(vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr),64);
    bufp->fullQData(oldp+139,(vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr),64);
    bufp->fullIData(oldp+141,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm),32);
    bufp->fullCData(oldp+142,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1),5);
    bufp->fullCData(oldp+143,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2),5);
    bufp->fullCData(oldp+144,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd),5);
    bufp->fullIData(oldp+145,(vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val),32);
    bufp->fullIData(oldp+146,(vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val),32);
    bufp->fullBit(oldp+147,(vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid));
    bufp->fullBit(oldp+148,(vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val_valid));
    bufp->fullQData(oldp+149,(vlSelf->system_top__DOT__cpu__DOT__q_ascii_instr),64);
    bufp->fullIData(oldp+151,(vlSelf->system_top__DOT__cpu__DOT__q_insn_imm),32);
    bufp->fullIData(oldp+152,(vlSelf->system_top__DOT__cpu__DOT__q_insn_opcode),32);
    bufp->fullCData(oldp+153,(vlSelf->system_top__DOT__cpu__DOT__q_insn_rs1),5);
    bufp->fullCData(oldp+154,(vlSelf->system_top__DOT__cpu__DOT__q_insn_rs2),5);
    bufp->fullCData(oldp+155,(vlSelf->system_top__DOT__cpu__DOT__q_insn_rd),5);
    bufp->fullBit(oldp+156,(vlSelf->system_top__DOT__cpu__DOT__dbg_next));
    bufp->fullBit(oldp+157,(vlSelf->system_top__DOT__cpu__DOT__dbg_valid_insn));
    bufp->fullQData(oldp+158,(vlSelf->system_top__DOT__cpu__DOT__cached_ascii_instr),64);
    bufp->fullIData(oldp+160,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_imm),32);
    bufp->fullIData(oldp+161,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_opcode),32);
    bufp->fullCData(oldp+162,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs1),5);
    bufp->fullCData(oldp+163,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs2),5);
    bufp->fullCData(oldp+164,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_rd),5);
    bufp->fullCData(oldp+165,(vlSelf->system_top__DOT__cpu__DOT__cpu_state),8);
    bufp->fullCData(oldp+166,(vlSelf->system_top__DOT__cpu__DOT__irq_state),2);
    bufp->fullWData(oldp+167,(vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_state),128);
    bufp->fullBit(oldp+171,(vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rinst));
    bufp->fullBit(oldp+172,(vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rdata));
    bufp->fullBit(oldp+173,(vlSelf->system_top__DOT__cpu__DOT__set_mem_do_wdata));
    bufp->fullBit(oldp+174,(vlSelf->system_top__DOT__cpu__DOT__latched_store));
    bufp->fullBit(oldp+175,(vlSelf->system_top__DOT__cpu__DOT__latched_stalu));
    bufp->fullBit(oldp+176,(vlSelf->system_top__DOT__cpu__DOT__latched_branch));
    bufp->fullBit(oldp+177,(vlSelf->system_top__DOT__cpu__DOT__latched_compr));
    bufp->fullBit(oldp+178,(vlSelf->system_top__DOT__cpu__DOT__latched_trace));
    bufp->fullBit(oldp+179,(vlSelf->system_top__DOT__cpu__DOT__latched_is_lu));
    bufp->fullBit(oldp+180,(vlSelf->system_top__DOT__cpu__DOT__latched_is_lh));
    bufp->fullBit(oldp+181,(vlSelf->system_top__DOT__cpu__DOT__latched_is_lb));
    bufp->fullCData(oldp+182,(vlSelf->system_top__DOT__cpu__DOT__latched_rd),5);
    bufp->fullIData(oldp+183,(vlSelf->system_top__DOT__cpu__DOT__current_pc),32);
    bufp->fullCData(oldp+184,(vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout_counter),4);
    bufp->fullBit(oldp+185,(vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout));
    bufp->fullIData(oldp+186,(vlSelf->system_top__DOT__cpu__DOT__next_irq_pending),32);
    bufp->fullBit(oldp+187,(vlSelf->system_top__DOT__cpu__DOT__do_waitirq));
    bufp->fullIData(oldp+188,(vlSelf->system_top__DOT__cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+189,(vlSelf->system_top__DOT__cpu__DOT__alu_out_q),32);
    bufp->fullBit(oldp+190,(vlSelf->system_top__DOT__cpu__DOT__alu_out_0));
    bufp->fullBit(oldp+191,(vlSelf->system_top__DOT__cpu__DOT__alu_out_0_q));
    bufp->fullBit(oldp+192,(vlSelf->system_top__DOT__cpu__DOT__alu_wait));
    bufp->fullBit(oldp+193,(vlSelf->system_top__DOT__cpu__DOT__alu_wait_2));
    bufp->fullIData(oldp+194,(((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sub)
                                ? (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                   - vlSelf->system_top__DOT__cpu__DOT__reg_op2)
                                : (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                   + vlSelf->system_top__DOT__cpu__DOT__reg_op2))),32);
    bufp->fullIData(oldp+195,((vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                               << (0x1fU & vlSelf->system_top__DOT__cpu__DOT__reg_op2))),32);
    bufp->fullIData(oldp+196,((IData)((0x1ffffffffULL 
                                       & VL_SHIFTRS_QQI(33,33,5, 
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sra) 
                                                                            | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srai)) 
                                                                           & (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                                                              >> 0x1fU)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->system_top__DOT__cpu__DOT__reg_op1))), 
                                                        (0x1fU 
                                                         & vlSelf->system_top__DOT__cpu__DOT__reg_op2))))),32);
    bufp->fullBit(oldp+197,(vlSelf->system_top__DOT__cpu__DOT__alu_eq));
    bufp->fullBit(oldp+198,(vlSelf->system_top__DOT__cpu__DOT__alu_ltu));
    bufp->fullBit(oldp+199,(vlSelf->system_top__DOT__cpu__DOT__alu_lts));
    bufp->fullBit(oldp+200,(vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word_q));
    bufp->fullBit(oldp+201,(vlSelf->system_top__DOT__cpu__DOT__cpuregs_write));
    bufp->fullIData(oldp+202,(vlSelf->system_top__DOT__cpu__DOT__cpuregs_wrdata),32);
    bufp->fullIData(oldp+203,(vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1),32);
    bufp->fullIData(oldp+204,(vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2),32);
    bufp->fullBit(oldp+205,(vlSelf->system_top__DOT__pcpi_wr));
    bufp->fullIData(oldp+206,(vlSelf->system_top__DOT__pcpi_rd),32);
    bufp->fullBit(oldp+207,(vlSelf->system_top__DOT__pcpi_wait));
    bufp->fullBit(oldp+208,(vlSelf->system_top__DOT__pcpi_ready));
    bufp->fullIData(oldp+209,(vlSelf->system_top__DOT__accelerator__DOT__accumulator),32);
    bufp->fullBit(oldp+210,(vlSelf->system_top__DOT__cpu__DOT__pcpi_int_wr));
    bufp->fullIData(oldp+211,(vlSelf->system_top__DOT__cpu__DOT__pcpi_int_rd),32);
    bufp->fullBit(oldp+212,(vlSelf->system_top__DOT__pcpi_valid));
    bufp->fullIData(oldp+213,(vlSelf->system_top__DOT__pcpi_insn),32);
    bufp->fullBit(oldp+214,(vlSelf->system_top__DOT__mem_valid));
    bufp->fullCData(oldp+215,((0x7fU & vlSelf->system_top__DOT__pcpi_insn)),7);
    bufp->fullCData(oldp+216,((7U & (vlSelf->system_top__DOT__pcpi_insn 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+217,((0xbU == (0x7fU & vlSelf->system_top__DOT__pcpi_insn))));
    bufp->fullBit(oldp+218,((1U == (7U & (vlSelf->system_top__DOT__pcpi_insn 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+219,(vlSelf->system_top__DOT__cpu__DOT__mem_instr));
    bufp->fullCData(oldp+220,(vlSelf->system_top__DOT__cpu__DOT__mem_wstrb),4);
    bufp->fullCData(oldp+221,(vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb),4);
    bufp->fullCData(oldp+222,(vlSelf->system_top__DOT__cpu__DOT__mem_state),2);
    bufp->fullIData(oldp+223,(vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q),32);
    bufp->fullBit(oldp+224,(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch));
    bufp->fullBit(oldp+225,(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst));
    bufp->fullBit(oldp+226,(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata));
    bufp->fullBit(oldp+227,(vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata));
    bufp->fullBit(oldp+228,(vlSelf->system_top__DOT__cpu__DOT__mem_la_secondword));
    bufp->fullIData(oldp+229,(vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle),32);
    bufp->fullBit(oldp+230,(((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch) 
                             | (IData)(vlSelf->system_top__DOT__cpu__DOT____VdfgTmp_hb06275b1__0))));
    bufp->fullBit(oldp+231,(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger));
    bufp->fullBit(oldp+232,(vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger));
    bufp->fullBit(oldp+233,(vlSelf->system_top__DOT__cpu__DOT__launch_next_insn));
    bufp->fullBit(oldp+234,(vlSelf->clk));
    bufp->fullBit(oldp+235,(vlSelf->resetn));
    bufp->fullBit(oldp+236,(vlSelf->trap));
    bufp->fullIData(oldp+237,(vlSelf->system_top__DOT__accelerator__DOT__sum),32);
    bufp->fullIData(oldp+238,(vlSelf->system_top__DOT__accelerator__DOT__next_result),32);
    bufp->fullBit(oldp+239,(vlSelf->system_top__DOT__cpu__DOT__mem_la_read));
    bufp->fullBit(oldp+240,(vlSelf->system_top__DOT__cpu__DOT__mem_la_write));
    bufp->fullIData(oldp+241,((((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch) 
                                | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst))
                                ? (0xfffffffcU & vlSelf->system_top__DOT__cpu__DOT__next_pc)
                                : (0xfffffffcU & vlSelf->system_top__DOT__cpu__DOT__reg_op1))),32);
    bufp->fullBit(oldp+242,(vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word));
    bufp->fullBit(oldp+243,(vlSelf->system_top__DOT__cpu__DOT__mem_done));
}
