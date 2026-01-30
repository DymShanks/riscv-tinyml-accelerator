// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystem_top__Syms.h"


void Vsystem_top___024root__trace_chg_0_sub_0(Vsystem_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsystem_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_chg_0\n"); );
    // Init
    Vsystem_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystem_top___024root*>(voidSelf);
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsystem_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsystem_top___024root__trace_chg_0_sub_0(Vsystem_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->system_top__DOT__cpu__DOT__reg_op1),32);
        bufp->chgIData(oldp+1,(vlSelf->system_top__DOT__cpu__DOT__reg_op2),32);
        bufp->chgIData(oldp+2,((vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                * vlSelf->system_top__DOT__cpu__DOT__reg_op2)),32);
        bufp->chgIData(oldp+3,(vlSelf->system_top__DOT__cpu__DOT__mem_addr),32);
        bufp->chgIData(oldp+4,(vlSelf->system_top__DOT__cpu__DOT__mem_wdata),32);
        bufp->chgIData(oldp+5,(vlSelf->system_top__DOT__cpu__DOT__mem_la_wdata),32);
        bufp->chgIData(oldp+6,(vlSelf->system_top__DOT__cpu__DOT__eoi),32);
        bufp->chgBit(oldp+7,(vlSelf->system_top__DOT__cpu__DOT__trace_valid));
        bufp->chgQData(oldp+8,(vlSelf->system_top__DOT__cpu__DOT__trace_data),36);
        bufp->chgQData(oldp+10,(vlSelf->system_top__DOT__cpu__DOT__count_cycle),64);
        bufp->chgQData(oldp+12,(vlSelf->system_top__DOT__cpu__DOT__count_instr),64);
        bufp->chgIData(oldp+14,(vlSelf->system_top__DOT__cpu__DOT__reg_pc),32);
        bufp->chgIData(oldp+15,(vlSelf->system_top__DOT__cpu__DOT__reg_next_pc),32);
        bufp->chgIData(oldp+16,(vlSelf->system_top__DOT__cpu__DOT__reg_out),32);
        bufp->chgCData(oldp+17,(vlSelf->system_top__DOT__cpu__DOT__reg_sh),5);
        bufp->chgIData(oldp+18,(vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode),32);
        bufp->chgIData(oldp+19,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode),32);
        bufp->chgIData(oldp+20,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_addr),32);
        bufp->chgIData(oldp+21,(vlSelf->system_top__DOT__cpu__DOT__next_pc),32);
        bufp->chgBit(oldp+22,(vlSelf->system_top__DOT__cpu__DOT__irq_delay));
        bufp->chgBit(oldp+23,(vlSelf->system_top__DOT__cpu__DOT__irq_active));
        bufp->chgIData(oldp+24,(vlSelf->system_top__DOT__cpu__DOT__irq_mask),32);
        bufp->chgIData(oldp+25,(vlSelf->system_top__DOT__cpu__DOT__irq_pending),32);
        bufp->chgIData(oldp+26,(vlSelf->system_top__DOT__cpu__DOT__timer),32);
        bufp->chgIData(oldp+27,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[0]),32);
        bufp->chgIData(oldp+28,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[1]),32);
        bufp->chgIData(oldp+29,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[2]),32);
        bufp->chgIData(oldp+30,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[3]),32);
        bufp->chgIData(oldp+31,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[4]),32);
        bufp->chgIData(oldp+32,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[5]),32);
        bufp->chgIData(oldp+33,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[6]),32);
        bufp->chgIData(oldp+34,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[7]),32);
        bufp->chgIData(oldp+35,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[8]),32);
        bufp->chgIData(oldp+36,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[9]),32);
        bufp->chgIData(oldp+37,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[10]),32);
        bufp->chgIData(oldp+38,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[11]),32);
        bufp->chgIData(oldp+39,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[12]),32);
        bufp->chgIData(oldp+40,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[13]),32);
        bufp->chgIData(oldp+41,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[14]),32);
        bufp->chgIData(oldp+42,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[15]),32);
        bufp->chgIData(oldp+43,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[16]),32);
        bufp->chgIData(oldp+44,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[17]),32);
        bufp->chgIData(oldp+45,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[18]),32);
        bufp->chgIData(oldp+46,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[19]),32);
        bufp->chgIData(oldp+47,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[20]),32);
        bufp->chgIData(oldp+48,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[21]),32);
        bufp->chgIData(oldp+49,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[22]),32);
        bufp->chgIData(oldp+50,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[23]),32);
        bufp->chgIData(oldp+51,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[24]),32);
        bufp->chgIData(oldp+52,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[25]),32);
        bufp->chgIData(oldp+53,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[26]),32);
        bufp->chgIData(oldp+54,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[27]),32);
        bufp->chgIData(oldp+55,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[28]),32);
        bufp->chgIData(oldp+56,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[29]),32);
        bufp->chgIData(oldp+57,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[30]),32);
        bufp->chgIData(oldp+58,(vlSelf->system_top__DOT__cpu__DOT__cpuregs[31]),32);
        bufp->chgCData(oldp+59,(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize),2);
        bufp->chgIData(oldp+60,(vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word),32);
        bufp->chgBit(oldp+61,(vlSelf->system_top__DOT__cpu__DOT__mem_la_firstword_reg));
        bufp->chgBit(oldp+62,(vlSelf->system_top__DOT__cpu__DOT__last_mem_valid));
        bufp->chgBit(oldp+63,(vlSelf->system_top__DOT__cpu__DOT__prefetched_high_word));
        bufp->chgBit(oldp+64,(vlSelf->system_top__DOT__cpu__DOT__instr_lui));
        bufp->chgBit(oldp+65,(vlSelf->system_top__DOT__cpu__DOT__instr_auipc));
        bufp->chgBit(oldp+66,(vlSelf->system_top__DOT__cpu__DOT__instr_jal));
        bufp->chgBit(oldp+67,(vlSelf->system_top__DOT__cpu__DOT__instr_jalr));
        bufp->chgBit(oldp+68,(vlSelf->system_top__DOT__cpu__DOT__instr_beq));
        bufp->chgBit(oldp+69,(vlSelf->system_top__DOT__cpu__DOT__instr_bne));
        bufp->chgBit(oldp+70,(vlSelf->system_top__DOT__cpu__DOT__instr_blt));
        bufp->chgBit(oldp+71,(vlSelf->system_top__DOT__cpu__DOT__instr_bge));
        bufp->chgBit(oldp+72,(vlSelf->system_top__DOT__cpu__DOT__instr_bltu));
        bufp->chgBit(oldp+73,(vlSelf->system_top__DOT__cpu__DOT__instr_bgeu));
        bufp->chgBit(oldp+74,(vlSelf->system_top__DOT__cpu__DOT__instr_lb));
        bufp->chgBit(oldp+75,(vlSelf->system_top__DOT__cpu__DOT__instr_lh));
        bufp->chgBit(oldp+76,(vlSelf->system_top__DOT__cpu__DOT__instr_lw));
        bufp->chgBit(oldp+77,(vlSelf->system_top__DOT__cpu__DOT__instr_lbu));
        bufp->chgBit(oldp+78,(vlSelf->system_top__DOT__cpu__DOT__instr_lhu));
        bufp->chgBit(oldp+79,(vlSelf->system_top__DOT__cpu__DOT__instr_sb));
        bufp->chgBit(oldp+80,(vlSelf->system_top__DOT__cpu__DOT__instr_sh));
        bufp->chgBit(oldp+81,(vlSelf->system_top__DOT__cpu__DOT__instr_sw));
        bufp->chgBit(oldp+82,(vlSelf->system_top__DOT__cpu__DOT__instr_addi));
        bufp->chgBit(oldp+83,(vlSelf->system_top__DOT__cpu__DOT__instr_slti));
        bufp->chgBit(oldp+84,(vlSelf->system_top__DOT__cpu__DOT__instr_sltiu));
        bufp->chgBit(oldp+85,(vlSelf->system_top__DOT__cpu__DOT__instr_xori));
        bufp->chgBit(oldp+86,(vlSelf->system_top__DOT__cpu__DOT__instr_ori));
        bufp->chgBit(oldp+87,(vlSelf->system_top__DOT__cpu__DOT__instr_andi));
        bufp->chgBit(oldp+88,(vlSelf->system_top__DOT__cpu__DOT__instr_slli));
        bufp->chgBit(oldp+89,(vlSelf->system_top__DOT__cpu__DOT__instr_srli));
        bufp->chgBit(oldp+90,(vlSelf->system_top__DOT__cpu__DOT__instr_srai));
        bufp->chgBit(oldp+91,(vlSelf->system_top__DOT__cpu__DOT__instr_add));
        bufp->chgBit(oldp+92,(vlSelf->system_top__DOT__cpu__DOT__instr_sub));
        bufp->chgBit(oldp+93,(vlSelf->system_top__DOT__cpu__DOT__instr_sll));
        bufp->chgBit(oldp+94,(vlSelf->system_top__DOT__cpu__DOT__instr_slt));
        bufp->chgBit(oldp+95,(vlSelf->system_top__DOT__cpu__DOT__instr_sltu));
        bufp->chgBit(oldp+96,(vlSelf->system_top__DOT__cpu__DOT__instr_xor));
        bufp->chgBit(oldp+97,(vlSelf->system_top__DOT__cpu__DOT__instr_srl));
        bufp->chgBit(oldp+98,(vlSelf->system_top__DOT__cpu__DOT__instr_sra));
        bufp->chgBit(oldp+99,(vlSelf->system_top__DOT__cpu__DOT__instr_or));
        bufp->chgBit(oldp+100,(vlSelf->system_top__DOT__cpu__DOT__instr_and));
        bufp->chgBit(oldp+101,(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycle));
        bufp->chgBit(oldp+102,(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycleh));
        bufp->chgBit(oldp+103,(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstr));
        bufp->chgBit(oldp+104,(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstrh));
        bufp->chgBit(oldp+105,(vlSelf->system_top__DOT__cpu__DOT__instr_ecall_ebreak));
        bufp->chgBit(oldp+106,(vlSelf->system_top__DOT__cpu__DOT__instr_fence));
        bufp->chgBit(oldp+107,(vlSelf->system_top__DOT__cpu__DOT__instr_getq));
        bufp->chgBit(oldp+108,(vlSelf->system_top__DOT__cpu__DOT__instr_setq));
        bufp->chgBit(oldp+109,(vlSelf->system_top__DOT__cpu__DOT__compressed_instr));
        bufp->chgBit(oldp+110,(vlSelf->system_top__DOT__cpu__DOT__instr_maskirq));
        bufp->chgBit(oldp+111,(vlSelf->system_top__DOT__cpu__DOT__instr_waitirq));
        bufp->chgBit(oldp+112,(vlSelf->system_top__DOT__cpu__DOT__instr_timer));
        bufp->chgBit(oldp+113,(vlSelf->system_top__DOT__cpu__DOT__instr_trap));
        bufp->chgCData(oldp+114,(vlSelf->system_top__DOT__cpu__DOT__decoded_rd),5);
        bufp->chgCData(oldp+115,(vlSelf->system_top__DOT__cpu__DOT__decoded_rs1),5);
        bufp->chgCData(oldp+116,(vlSelf->system_top__DOT__cpu__DOT__decoded_rs2),5);
        bufp->chgIData(oldp+117,(vlSelf->system_top__DOT__cpu__DOT__decoded_imm),32);
        bufp->chgIData(oldp+118,(vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j),32);
        bufp->chgBit(oldp+119,(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger_q));
        bufp->chgBit(oldp+120,(vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger_q));
        bufp->chgBit(oldp+121,(vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal));
        bufp->chgBit(oldp+122,(vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+123,(vlSelf->system_top__DOT__cpu__DOT__is_slli_srli_srai));
        bufp->chgBit(oldp+124,(vlSelf->system_top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+125,(vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw));
        bufp->chgBit(oldp+126,(vlSelf->system_top__DOT__cpu__DOT__is_sll_srl_sra));
        bufp->chgBit(oldp+127,(vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+128,(vlSelf->system_top__DOT__cpu__DOT__is_slti_blt_slt));
        bufp->chgBit(oldp+129,(vlSelf->system_top__DOT__cpu__DOT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+130,(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+131,(vlSelf->system_top__DOT__cpu__DOT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+132,(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm));
        bufp->chgBit(oldp+133,(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg));
        bufp->chgBit(oldp+134,(vlSelf->system_top__DOT__cpu__DOT__is_compare));
        bufp->chgBit(oldp+135,(vlSelf->system_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        bufp->chgQData(oldp+136,(vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr),64);
        bufp->chgQData(oldp+138,(vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr),64);
        bufp->chgIData(oldp+140,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm),32);
        bufp->chgCData(oldp+141,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1),5);
        bufp->chgCData(oldp+142,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2),5);
        bufp->chgCData(oldp+143,(vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd),5);
        bufp->chgIData(oldp+144,(vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val),32);
        bufp->chgIData(oldp+145,(vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val),32);
        bufp->chgBit(oldp+146,(vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid));
        bufp->chgBit(oldp+147,(vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val_valid));
        bufp->chgQData(oldp+148,(vlSelf->system_top__DOT__cpu__DOT__q_ascii_instr),64);
        bufp->chgIData(oldp+150,(vlSelf->system_top__DOT__cpu__DOT__q_insn_imm),32);
        bufp->chgIData(oldp+151,(vlSelf->system_top__DOT__cpu__DOT__q_insn_opcode),32);
        bufp->chgCData(oldp+152,(vlSelf->system_top__DOT__cpu__DOT__q_insn_rs1),5);
        bufp->chgCData(oldp+153,(vlSelf->system_top__DOT__cpu__DOT__q_insn_rs2),5);
        bufp->chgCData(oldp+154,(vlSelf->system_top__DOT__cpu__DOT__q_insn_rd),5);
        bufp->chgBit(oldp+155,(vlSelf->system_top__DOT__cpu__DOT__dbg_next));
        bufp->chgBit(oldp+156,(vlSelf->system_top__DOT__cpu__DOT__dbg_valid_insn));
        bufp->chgQData(oldp+157,(vlSelf->system_top__DOT__cpu__DOT__cached_ascii_instr),64);
        bufp->chgIData(oldp+159,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_imm),32);
        bufp->chgIData(oldp+160,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_opcode),32);
        bufp->chgCData(oldp+161,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs1),5);
        bufp->chgCData(oldp+162,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs2),5);
        bufp->chgCData(oldp+163,(vlSelf->system_top__DOT__cpu__DOT__cached_insn_rd),5);
        bufp->chgCData(oldp+164,(vlSelf->system_top__DOT__cpu__DOT__cpu_state),8);
        bufp->chgCData(oldp+165,(vlSelf->system_top__DOT__cpu__DOT__irq_state),2);
        bufp->chgWData(oldp+166,(vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_state),128);
        bufp->chgBit(oldp+170,(vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rinst));
        bufp->chgBit(oldp+171,(vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rdata));
        bufp->chgBit(oldp+172,(vlSelf->system_top__DOT__cpu__DOT__set_mem_do_wdata));
        bufp->chgBit(oldp+173,(vlSelf->system_top__DOT__cpu__DOT__latched_store));
        bufp->chgBit(oldp+174,(vlSelf->system_top__DOT__cpu__DOT__latched_stalu));
        bufp->chgBit(oldp+175,(vlSelf->system_top__DOT__cpu__DOT__latched_branch));
        bufp->chgBit(oldp+176,(vlSelf->system_top__DOT__cpu__DOT__latched_compr));
        bufp->chgBit(oldp+177,(vlSelf->system_top__DOT__cpu__DOT__latched_trace));
        bufp->chgBit(oldp+178,(vlSelf->system_top__DOT__cpu__DOT__latched_is_lu));
        bufp->chgBit(oldp+179,(vlSelf->system_top__DOT__cpu__DOT__latched_is_lh));
        bufp->chgBit(oldp+180,(vlSelf->system_top__DOT__cpu__DOT__latched_is_lb));
        bufp->chgCData(oldp+181,(vlSelf->system_top__DOT__cpu__DOT__latched_rd),5);
        bufp->chgIData(oldp+182,(vlSelf->system_top__DOT__cpu__DOT__current_pc),32);
        bufp->chgCData(oldp+183,(vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout_counter),4);
        bufp->chgBit(oldp+184,(vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout));
        bufp->chgIData(oldp+185,(vlSelf->system_top__DOT__cpu__DOT__next_irq_pending),32);
        bufp->chgBit(oldp+186,(vlSelf->system_top__DOT__cpu__DOT__do_waitirq));
        bufp->chgIData(oldp+187,(vlSelf->system_top__DOT__cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+188,(vlSelf->system_top__DOT__cpu__DOT__alu_out_q),32);
        bufp->chgBit(oldp+189,(vlSelf->system_top__DOT__cpu__DOT__alu_out_0));
        bufp->chgBit(oldp+190,(vlSelf->system_top__DOT__cpu__DOT__alu_out_0_q));
        bufp->chgBit(oldp+191,(vlSelf->system_top__DOT__cpu__DOT__alu_wait));
        bufp->chgBit(oldp+192,(vlSelf->system_top__DOT__cpu__DOT__alu_wait_2));
        bufp->chgIData(oldp+193,(((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sub)
                                   ? (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                      - vlSelf->system_top__DOT__cpu__DOT__reg_op2)
                                   : (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                      + vlSelf->system_top__DOT__cpu__DOT__reg_op2))),32);
        bufp->chgIData(oldp+194,((vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                  << (0x1fU & vlSelf->system_top__DOT__cpu__DOT__reg_op2))),32);
        bufp->chgIData(oldp+195,((IData)((0x1ffffffffULL 
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
        bufp->chgBit(oldp+196,(vlSelf->system_top__DOT__cpu__DOT__alu_eq));
        bufp->chgBit(oldp+197,(vlSelf->system_top__DOT__cpu__DOT__alu_ltu));
        bufp->chgBit(oldp+198,(vlSelf->system_top__DOT__cpu__DOT__alu_lts));
        bufp->chgBit(oldp+199,(vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word_q));
        bufp->chgBit(oldp+200,(vlSelf->system_top__DOT__cpu__DOT__cpuregs_write));
        bufp->chgIData(oldp+201,(vlSelf->system_top__DOT__cpu__DOT__cpuregs_wrdata),32);
        bufp->chgIData(oldp+202,(vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1),32);
        bufp->chgIData(oldp+203,(vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+204,(vlSelf->system_top__DOT__pcpi_wr));
        bufp->chgIData(oldp+205,(vlSelf->system_top__DOT__pcpi_rd),32);
        bufp->chgBit(oldp+206,(vlSelf->system_top__DOT__pcpi_wait));
        bufp->chgBit(oldp+207,(vlSelf->system_top__DOT__pcpi_ready));
        bufp->chgIData(oldp+208,(vlSelf->system_top__DOT__accelerator__DOT__accumulator),32);
        bufp->chgBit(oldp+209,(vlSelf->system_top__DOT__cpu__DOT__pcpi_int_wr));
        bufp->chgIData(oldp+210,(vlSelf->system_top__DOT__cpu__DOT__pcpi_int_rd),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+211,(vlSelf->system_top__DOT__pcpi_valid));
        bufp->chgIData(oldp+212,(vlSelf->system_top__DOT__pcpi_insn),32);
        bufp->chgBit(oldp+213,(vlSelf->system_top__DOT__mem_valid));
        bufp->chgCData(oldp+214,((0x7fU & vlSelf->system_top__DOT__pcpi_insn)),7);
        bufp->chgCData(oldp+215,((7U & (vlSelf->system_top__DOT__pcpi_insn 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+216,((0xbU == (0x7fU & vlSelf->system_top__DOT__pcpi_insn))));
        bufp->chgBit(oldp+217,((1U == (7U & (vlSelf->system_top__DOT__pcpi_insn 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+218,(vlSelf->system_top__DOT__cpu__DOT__mem_instr));
        bufp->chgCData(oldp+219,(vlSelf->system_top__DOT__cpu__DOT__mem_wstrb),4);
        bufp->chgCData(oldp+220,(vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb),4);
        bufp->chgCData(oldp+221,(vlSelf->system_top__DOT__cpu__DOT__mem_state),2);
        bufp->chgIData(oldp+222,(vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q),32);
        bufp->chgBit(oldp+223,(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch));
        bufp->chgBit(oldp+224,(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst));
        bufp->chgBit(oldp+225,(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata));
        bufp->chgBit(oldp+226,(vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata));
        bufp->chgBit(oldp+227,(vlSelf->system_top__DOT__cpu__DOT__mem_la_secondword));
        bufp->chgIData(oldp+228,(vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle),32);
        bufp->chgBit(oldp+229,(((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch) 
                                | (IData)(vlSelf->system_top__DOT__cpu__DOT____VdfgTmp_hb06275b1__0))));
        bufp->chgBit(oldp+230,(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger));
        bufp->chgBit(oldp+231,(vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+232,(vlSelf->system_top__DOT__cpu__DOT__launch_next_insn));
    }
    bufp->chgBit(oldp+233,(vlSelf->clk));
    bufp->chgBit(oldp+234,(vlSelf->resetn));
    bufp->chgBit(oldp+235,(vlSelf->trap));
    bufp->chgIData(oldp+236,(vlSelf->system_top__DOT__accelerator__DOT__sum),32);
    bufp->chgIData(oldp+237,(vlSelf->system_top__DOT__accelerator__DOT__next_result),32);
    bufp->chgBit(oldp+238,(vlSelf->system_top__DOT__cpu__DOT__mem_la_read));
    bufp->chgBit(oldp+239,(vlSelf->system_top__DOT__cpu__DOT__mem_la_write));
    bufp->chgIData(oldp+240,((((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch) 
                               | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst))
                               ? (0xfffffffcU & vlSelf->system_top__DOT__cpu__DOT__next_pc)
                               : (0xfffffffcU & vlSelf->system_top__DOT__cpu__DOT__reg_op1))),32);
    bufp->chgBit(oldp+241,(vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word));
    bufp->chgBit(oldp+242,(vlSelf->system_top__DOT__cpu__DOT__mem_done));
}

void Vsystem_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root__trace_cleanup\n"); );
    // Init
    Vsystem_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystem_top___024root*>(voidSelf);
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
