// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystem_top.h for the primary calling header

#include "Vsystem_top__pch.h"
#include "Vsystem_top___024root.h"

VL_ATTR_COLD void Vsystem_top___024root___eval_static(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsystem_top___024root___eval_initial(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = vlSelf->resetn;
}

VL_ATTR_COLD void Vsystem_top___024root___eval_final(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystem_top___024root___dump_triggers__stl(Vsystem_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsystem_top___024root___eval_phase__stl(Vsystem_top___024root* vlSelf);

VL_ATTR_COLD void Vsystem_top___024root___eval_settle(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsystem_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/system_top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsystem_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystem_top___024root___dump_triggers__stl(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vsystem_top__ConstPool__TABLE_h2fb03f6c_0;

VL_ATTR_COLD void Vsystem_top___024root___stl_sequent__TOP__0(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->system_top__DOT__cpu__DOT__dbg_mem_valid 
        = vlSelf->system_top__DOT__mem_valid;
    vlSelf->system_top__DOT__cpu__DOT__pcpi_int_wr = 0U;
    vlSelf->system_top__DOT__cpu__DOT__pcpi_int_rd = 0U;
    if (vlSelf->system_top__DOT__pcpi_ready) {
        vlSelf->system_top__DOT__cpu__DOT__pcpi_int_wr 
            = vlSelf->system_top__DOT__pcpi_wr;
        vlSelf->system_top__DOT__cpu__DOT__pcpi_int_rd 
            = vlSelf->system_top__DOT__pcpi_rd;
    }
    if ((0U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wdata 
            = vlSelf->system_top__DOT__cpu__DOT__reg_op2;
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb = 0xfU;
        vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word 
            = vlSelf->system_top__DOT__cpu__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wdata 
            = ((vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelf->system_top__DOT__cpu__DOT__reg_op2));
        if ((2U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)) {
            vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb = 0xcU;
            if ((2U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)) {
                vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word 
                    = (vlSelf->system_top__DOT__cpu__DOT__mem_rdata 
                       >> 0x10U);
            }
        } else {
            vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb = 3U;
            vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word 
                = (0xffffU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata);
        }
    } else if ((2U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wdata 
            = ((vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelf->system_top__DOT__cpu__DOT__reg_op2))));
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)));
        vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word 
            = ((2U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)
                ? ((1U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)
                    ? (vlSelf->system_top__DOT__cpu__DOT__mem_rdata 
                       >> 0x18U) : (0xffU & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata 
                                             >> 0x10U)))
                : ((1U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)
                    ? (0xffU & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata 
                                >> 8U)) : (0xffU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata)));
    }
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelf->system_top__DOT__cpu__DOT__decoded_rs1))
            ? vlSelf->system_top__DOT__cpu__DOT__cpuregs
           [vlSelf->system_top__DOT__cpu__DOT__decoded_rs1]
            : 0U);
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelf->system_top__DOT__cpu__DOT__decoded_rs2))
            ? vlSelf->system_top__DOT__cpu__DOT__cpuregs
           [vlSelf->system_top__DOT__cpu__DOT__decoded_rs2]
            : 0U);
    vlSelf->system_top__DOT__cpu__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state)) 
           & (IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger));
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_write = 0U;
    vlSelf->system_top__DOT__cpu__DOT__mem_la_write 
        = ((IData)(vlSelf->resetn) & ((~ (IData)((0U 
                                                  != (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)))) 
                                      & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata)));
    vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelf->system_top__DOT__mem_valid)
            ? vlSelf->system_top__DOT__cpu__DOT__mem_rdata
            : vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q);
    __Vtableidx1 = vlSelf->system_top__DOT__cpu__DOT__cpu_state;
    vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_state[0U] 
        = Vsystem_top__ConstPool__TABLE_h2fb03f6c_0
        [__Vtableidx1][0U];
    vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_state[1U] 
        = Vsystem_top__ConstPool__TABLE_h2fb03f6c_0
        [__Vtableidx1][1U];
    vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_state[2U] 
        = Vsystem_top__ConstPool__TABLE_h2fb03f6c_0
        [__Vtableidx1][2U];
    vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_state[3U] 
        = Vsystem_top__ConstPool__TABLE_h2fb03f6c_0
        [__Vtableidx1][3U];
    vlSelf->system_top__DOT__cpu__DOT__next_pc = (((IData)(vlSelf->system_top__DOT__cpu__DOT__latched_branch) 
                                                   & (IData)(vlSelf->system_top__DOT__cpu__DOT__latched_store))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlSelf->system_top__DOT__cpu__DOT__reg_out)
                                                   : vlSelf->system_top__DOT__cpu__DOT__reg_next_pc);
    vlSelf->system_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstrh))));
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_imm;
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_opcode;
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_rs1;
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_rs2;
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_rd;
    vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word 
        = vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__prefetched_high_word)))) {
        vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelf->system_top__DOT__cpu__DOT__latched_branch) 
                | (0U != (IData)(vlSelf->system_top__DOT__cpu__DOT__irq_state))) 
               | (~ (IData)(vlSelf->resetn))))) {
        vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelf->system_top__DOT__cpu__DOT__mem_la_read 
        = ((IData)(vlSelf->resetn) & ((~ (IData)((0U 
                                                  != (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)))) 
                                      & ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) 
                                         | ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch) 
                                            | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata)))));
    vlSelf->system_top__DOT__accelerator__DOT__sum 
        = (vlSelf->system_top__DOT__accelerator__DOT__accumulator 
           + (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
              * vlSelf->system_top__DOT__cpu__DOT__reg_op2));
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) {
        if (vlSelf->system_top__DOT__cpu__DOT__latched_branch) {
            vlSelf->system_top__DOT__cpu__DOT__cpuregs_write = 1U;
            vlSelf->system_top__DOT__cpu__DOT__cpuregs_wrdata 
                = (vlSelf->system_top__DOT__cpu__DOT__reg_pc 
                   + ((IData)(vlSelf->system_top__DOT__cpu__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__latched_store) 
                    & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__latched_branch)))) {
            vlSelf->system_top__DOT__cpu__DOT__cpuregs_write = 1U;
            vlSelf->system_top__DOT__cpu__DOT__cpuregs_wrdata 
                = ((IData)(vlSelf->system_top__DOT__cpu__DOT__latched_stalu)
                    ? vlSelf->system_top__DOT__cpu__DOT__alu_out_q
                    : vlSelf->system_top__DOT__cpu__DOT__reg_out);
        }
    }
    vlSelf->system_top__DOT__cpu__DOT____VdfgTmp_hb06275b1__0 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) 
           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata) 
              | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata)));
    vlSelf->system_top__DOT__cpu__DOT__alu_eq = (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                                 == vlSelf->system_top__DOT__cpu__DOT__reg_op2);
    vlSelf->system_top__DOT__cpu__DOT__alu_lts = VL_LTS_III(32, vlSelf->system_top__DOT__cpu__DOT__reg_op1, vlSelf->system_top__DOT__cpu__DOT__reg_op2);
    vlSelf->system_top__DOT__cpu__DOT__alu_ltu = (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                                  < vlSelf->system_top__DOT__cpu__DOT__reg_op2);
    vlSelf->system_top__DOT__cpu__DOT__instr_trap = 
        (1U & (~ ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lui) 
                  | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_auipc) 
                     | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_jal) 
                        | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_jalr) 
                           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_beq) 
                              | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_bne) 
                                 | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_blt) 
                                    | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_bge) 
                                       | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_bltu) 
                                          | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_bgeu) 
                                             | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lb) 
                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lh) 
                                                   | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lw) 
                                                      | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lbu) 
                                                         | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lhu) 
                                                            | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sb) 
                                                               | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sh) 
                                                                  | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sw) 
                                                                     | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_addi) 
                                                                        | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_slti) 
                                                                           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sltiu) 
                                                                              | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_xori) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_ori) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_andi) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_slli) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srli) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srai) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_add) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sub) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sll) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_slt) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_xor) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srl) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sra) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_or) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_and) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycle) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycleh) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstr) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_fence) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_getq) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_setq) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__compressed_instr) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_timer) 
                                                                                | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_waitirq))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0ULL;
    if (vlSelf->system_top__DOT__cpu__DOT__instr_lui) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_auipc) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_jal) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_jalr) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_beq) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_bne) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_blt) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_bge) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_bltu) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_bgeu) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_lb) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_lh) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_lw) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_lbu) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_lhu) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_sb) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_sh) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_sw) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_addi) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_slti) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_sltiu) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_xori) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_ori) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_andi) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_slli) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_srli) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_srai) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_add) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_sub) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x737562ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_sll) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_slt) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_sltu) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_xor) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_srl) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_sra) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_or) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_and) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_rdcycle) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_rdcycleh) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_rdinstr) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_rdinstrh) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_fence) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x66656e6365ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_getq) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_setq) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__compressed_instr) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_maskirq) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_waitirq) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__instr_timer) {
        vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlSelf->system_top__DOT__accelerator__DOT__next_result 
        = ((IData)(((0x1000U == (0x7000U & vlSelf->system_top__DOT__pcpi_insn)) 
                    & (vlSelf->system_top__DOT__accelerator__DOT__sum 
                       >> 0x1fU))) ? 0U : vlSelf->system_top__DOT__accelerator__DOT__sum);
    vlSelf->system_top__DOT__cpu__DOT__mem_done = ((IData)(vlSelf->resetn) 
                                                   & (((IData)(vlSelf->system_top__DOT__mem_valid) 
                                                       & ((0U 
                                                           != (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)) 
                                                          & (IData)(vlSelf->system_top__DOT__cpu__DOT____VdfgTmp_hb06275b1__0))) 
                                                      | ((3U 
                                                          == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)) 
                                                         & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst))));
    vlSelf->system_top__DOT__cpu__DOT__alu_out_0 = 0U;
    if (vlSelf->system_top__DOT__cpu__DOT__instr_beq) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out_0 
            = vlSelf->system_top__DOT__cpu__DOT__alu_eq;
    } else if (vlSelf->system_top__DOT__cpu__DOT__instr_bne) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__alu_eq)));
    } else if (vlSelf->system_top__DOT__cpu__DOT__instr_bge) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__alu_lts)));
    } else if (vlSelf->system_top__DOT__cpu__DOT__instr_bgeu) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__alu_ltu)));
    } else if (vlSelf->system_top__DOT__cpu__DOT__is_slti_blt_slt) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out_0 
            = vlSelf->system_top__DOT__cpu__DOT__alu_lts;
    } else if (vlSelf->system_top__DOT__cpu__DOT__is_sltiu_bltu_sltu) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out_0 
            = vlSelf->system_top__DOT__cpu__DOT__alu_ltu;
    }
    vlSelf->system_top__DOT__cpu__DOT__alu_out = 0U;
    if (vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sub)
                ? (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                   - vlSelf->system_top__DOT__cpu__DOT__reg_op2)
                : (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                   + vlSelf->system_top__DOT__cpu__DOT__reg_op2));
    } else if (vlSelf->system_top__DOT__cpu__DOT__is_compare) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out 
            = vlSelf->system_top__DOT__cpu__DOT__alu_out_0;
    } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_xori) 
                | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_xor))) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out 
            = (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
               ^ vlSelf->system_top__DOT__cpu__DOT__reg_op2);
    } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_ori) 
                | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_or))) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out 
            = (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
               | vlSelf->system_top__DOT__cpu__DOT__reg_op2);
    } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_andi) 
                | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_and))) {
        vlSelf->system_top__DOT__cpu__DOT__alu_out 
            = (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
               & vlSelf->system_top__DOT__cpu__DOT__reg_op2);
    }
    vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr 
        = vlSelf->system_top__DOT__cpu__DOT__q_ascii_instr;
    if (vlSelf->system_top__DOT__cpu__DOT__dbg_next) {
        if (vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger_q) {
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_imm;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_opcode;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs1;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs2;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_rd;
            vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelf->system_top__DOT__cpu__DOT__cached_ascii_instr;
        } else {
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelf->system_top__DOT__cpu__DOT__decoded_imm;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode))
                    ? vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode
                    : (0xffffU & vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode));
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelf->system_top__DOT__cpu__DOT__decoded_rs1;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelf->system_top__DOT__cpu__DOT__decoded_rs2;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelf->system_top__DOT__cpu__DOT__decoded_rd;
            vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr;
        }
    }
}

VL_ATTR_COLD void Vsystem_top___024root___eval_stl(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsystem_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vsystem_top___024root___eval_triggers__stl(Vsystem_top___024root* vlSelf);

VL_ATTR_COLD bool Vsystem_top___024root___eval_phase__stl(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsystem_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vsystem_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystem_top___024root___dump_triggers__ico(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystem_top___024root___dump_triggers__act(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystem_top___024root___dump_triggers__nba(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystem_top___024root___ctor_var_reset(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->trap = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->system_top__DOT__cpu__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->system_top__DOT__cpu__DOT__irq = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__eoi = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__trace_valid = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__trace_data = VL_RAND_RESET_Q(36);
    vlSelf->system_top__DOT__cpu__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->system_top__DOT__cpu__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->system_top__DOT__cpu__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__dbg_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__irq_delay = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__irq_active = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__irq_mask = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__irq_pending = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->system_top__DOT__cpu__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->system_top__DOT__cpu__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__pcpi_int_wr = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__pcpi_int_rd = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->system_top__DOT__cpu__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
    vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_lui = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_auipc = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_jal = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_jalr = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_beq = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_bne = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_bge = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_fence = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_getq = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_setq = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_timer = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__instr_trap = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__decoded_rd = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__decoded_imm = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__compressed_instr = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_compare = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->system_top__DOT__cpu__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__dbg_next = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->system_top__DOT__cpu__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->system_top__DOT__cpu__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_state);
    vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__latched_store = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__latched_stalu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__latched_branch = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__latched_trace = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__latched_rd = VL_RAND_RESET_I(5);
    vlSelf->system_top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__alu_out_q = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__alu_wait = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__alu_eq = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__alu_ltu = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__alu_lts = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__cpu__DOT____VdfgTmp_hb06275b1__0 = 0;
    vlSelf->system_top__DOT__accelerator__DOT__accumulator = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__accelerator__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->system_top__DOT__accelerator__DOT__next_result = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__trap = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__system_top__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
