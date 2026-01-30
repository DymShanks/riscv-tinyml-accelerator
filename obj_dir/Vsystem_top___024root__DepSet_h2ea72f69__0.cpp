// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystem_top.h for the primary calling header

#include "Vsystem_top__pch.h"
#include "Vsystem_top___024root.h"

VL_INLINE_OPT void Vsystem_top___024root___ico_sequent__TOP__0(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->system_top__DOT__cpu__DOT__mem_la_write 
        = ((IData)(vlSelf->resetn) & ((~ (IData)((0U 
                                                  != (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)))) 
                                      & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata)));
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
    vlSelf->system_top__DOT__cpu__DOT__mem_done = ((IData)(vlSelf->resetn) 
                                                   & (((IData)(vlSelf->system_top__DOT__mem_valid) 
                                                       & ((0U 
                                                           != (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)) 
                                                          & (IData)(vlSelf->system_top__DOT__cpu__DOT____VdfgTmp_hb06275b1__0))) 
                                                      | ((3U 
                                                          == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)) 
                                                         & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst))));
}

void Vsystem_top___024root___eval_ico(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsystem_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vsystem_top___024root___eval_triggers__ico(Vsystem_top___024root* vlSelf);

bool Vsystem_top___024root___eval_phase__ico(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsystem_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vsystem_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsystem_top___024root___eval_act(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_act\n"); );
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vsystem_top__ConstPool__TABLE_h2fb03f6c_0;

VL_INLINE_OPT void Vsystem_top___024root___nba_sequent__TOP__0(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vdlyvdim0__system_top__DOT__cpu__DOT__cpuregs__v0;
    __Vdlyvdim0__system_top__DOT__cpu__DOT__cpuregs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__system_top__DOT__cpu__DOT__cpuregs__v0;
    __Vdlyvval__system_top__DOT__cpu__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__system_top__DOT__cpu__DOT__cpuregs__v0;
    __Vdlyvset__system_top__DOT__cpu__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __Vdly__system_top__DOT__cpu__DOT__reg_sh;
    __Vdly__system_top__DOT__cpu__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__system_top__DOT__cpu__DOT__reg_out;
    __Vdly__system_top__DOT__cpu__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__system_top__DOT__cpu__DOT__count_cycle;
    __Vdly__system_top__DOT__cpu__DOT__count_cycle = 0;
    CData/*1:0*/ __Vdly__system_top__DOT__cpu__DOT__mem_wordsize;
    __Vdly__system_top__DOT__cpu__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__system_top__DOT__cpu__DOT__latched_is_lu;
    __Vdly__system_top__DOT__cpu__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__system_top__DOT__cpu__DOT__latched_is_lh;
    __Vdly__system_top__DOT__cpu__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__system_top__DOT__cpu__DOT__latched_is_lb;
    __Vdly__system_top__DOT__cpu__DOT__latched_is_lb = 0;
    IData/*31:0*/ __Vdly__system_top__DOT__cpu__DOT__reg_pc;
    __Vdly__system_top__DOT__cpu__DOT__reg_pc = 0;
    QData/*63:0*/ __Vdly__system_top__DOT__cpu__DOT__count_instr;
    __Vdly__system_top__DOT__cpu__DOT__count_instr = 0;
    CData/*7:0*/ __Vdly__system_top__DOT__cpu__DOT__cpu_state;
    __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__system_top__DOT__cpu__DOT__reg_op1;
    __Vdly__system_top__DOT__cpu__DOT__reg_op1 = 0;
    CData/*3:0*/ __Vdly__system_top__DOT__cpu__DOT__pcpi_timeout_counter;
    __Vdly__system_top__DOT__cpu__DOT__pcpi_timeout_counter = 0;
    // Body
    __Vdly__system_top__DOT__cpu__DOT__pcpi_timeout_counter 
        = vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout_counter;
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_state 
        = vlSelf->system_top__DOT__cpu__DOT__mem_state;
    vlSelf->__Vdly__system_top__DOT__pcpi_valid = vlSelf->system_top__DOT__pcpi_valid;
    __Vdly__system_top__DOT__cpu__DOT__count_instr 
        = vlSelf->system_top__DOT__cpu__DOT__count_instr;
    __Vdly__system_top__DOT__cpu__DOT__latched_is_lb 
        = vlSelf->system_top__DOT__cpu__DOT__latched_is_lb;
    __Vdly__system_top__DOT__cpu__DOT__latched_is_lh 
        = vlSelf->system_top__DOT__cpu__DOT__latched_is_lh;
    __Vdly__system_top__DOT__cpu__DOT__latched_is_lu 
        = vlSelf->system_top__DOT__cpu__DOT__latched_is_lu;
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_pseudo_trigger 
        = vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger;
    __Vdly__system_top__DOT__cpu__DOT__count_cycle 
        = vlSelf->system_top__DOT__cpu__DOT__count_cycle;
    __Vdly__system_top__DOT__cpu__DOT__reg_sh = vlSelf->system_top__DOT__cpu__DOT__reg_sh;
    vlSelf->__Vdly__trap = vlSelf->trap;
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_trigger 
        = vlSelf->system_top__DOT__cpu__DOT__decoder_trigger;
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_prefetch 
        = vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch;
    __Vdly__system_top__DOT__cpu__DOT__reg_pc = vlSelf->system_top__DOT__cpu__DOT__reg_pc;
    __Vdly__system_top__DOT__cpu__DOT__mem_wordsize 
        = vlSelf->system_top__DOT__cpu__DOT__mem_wordsize;
    __Vdly__system_top__DOT__cpu__DOT__reg_out = vlSelf->system_top__DOT__cpu__DOT__reg_out;
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_wdata 
        = vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata;
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rdata 
        = vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata;
    __Vdly__system_top__DOT__cpu__DOT__cpu_state = vlSelf->system_top__DOT__cpu__DOT__cpu_state;
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst 
        = vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst;
    __Vdly__system_top__DOT__cpu__DOT__reg_op1 = vlSelf->system_top__DOT__cpu__DOT__reg_op1;
    __Vdlyvset__system_top__DOT__cpu__DOT__cpuregs__v0 = 0U;
    if ((((IData)(vlSelf->resetn) & (IData)(vlSelf->system_top__DOT__cpu__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelf->system_top__DOT__cpu__DOT__latched_rd)))) {
        __Vdlyvval__system_top__DOT__cpu__DOT__cpuregs__v0 
            = vlSelf->system_top__DOT__cpu__DOT__cpuregs_wrdata;
        __Vdlyvset__system_top__DOT__cpu__DOT__cpuregs__v0 = 1U;
        __Vdlyvdim0__system_top__DOT__cpu__DOT__cpuregs__v0 
            = vlSelf->system_top__DOT__cpu__DOT__latched_rd;
    }
    vlSelf->system_top__DOT__cpu__DOT__trace_valid = 0U;
    vlSelf->system_top__DOT__cpu__DOT__alu_wait = 0U;
    vlSelf->system_top__DOT__cpu__DOT__trace_data = 0ULL;
    vlSelf->system_top__DOT__cpu__DOT__alu_wait_2 = 0U;
    if (vlSelf->system_top__DOT__cpu__DOT__launch_next_insn) {
        vlSelf->system_top__DOT__cpu__DOT__dbg_insn_addr 
            = vlSelf->system_top__DOT__cpu__DOT__next_pc;
        vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val = 0U;
        vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val = 0U;
        vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid = 0U;
        vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val_valid = 0U;
    }
    vlSelf->system_top__DOT__cpu__DOT__q_ascii_instr 
        = vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr;
    vlSelf->system_top__DOT__cpu__DOT__q_insn_imm = vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm;
    vlSelf->system_top__DOT__cpu__DOT__q_insn_opcode 
        = vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode;
    vlSelf->system_top__DOT__cpu__DOT__q_insn_rs1 = vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1;
    vlSelf->system_top__DOT__cpu__DOT__q_insn_rs2 = vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2;
    vlSelf->system_top__DOT__cpu__DOT__q_insn_rd = vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd;
    vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word_q 
        = vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word;
    vlSelf->system_top__DOT__cpu__DOT__alu_out_0_q 
        = vlSelf->system_top__DOT__cpu__DOT__alu_out_0;
    vlSelf->system_top__DOT__cpu__DOT__next_irq_pending = 0U;
    if ((1U & (~ (IData)(vlSelf->resetn)))) {
        vlSelf->system_top__DOT__cpu__DOT__eoi = 0U;
        vlSelf->system_top__DOT__cpu__DOT__irq_mask = 0xffffffffU;
        vlSelf->system_top__DOT__cpu__DOT__latched_trace = 0U;
        vlSelf->system_top__DOT__cpu__DOT__next_irq_pending = 0U;
    }
    vlSelf->system_top__DOT__cpu__DOT__irq_pending 
        = vlSelf->system_top__DOT__cpu__DOT__next_irq_pending;
    if ((1U & ((~ (IData)(vlSelf->resetn)) | (IData)(vlSelf->trap)))) {
        vlSelf->system_top__DOT__cpu__DOT__dbg_valid_insn = 0U;
        vlSelf->system_top__DOT__cpu__DOT__prefetched_high_word = 0U;
    } else if (vlSelf->system_top__DOT__cpu__DOT__launch_next_insn) {
        vlSelf->system_top__DOT__cpu__DOT__dbg_valid_insn = 1U;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->resetn)) | (IData)(vlSelf->trap))))) {
        if (vlSelf->system_top__DOT__cpu__DOT__mem_la_write) {
            vlSelf->system_top__DOT__cpu__DOT__mem_wdata 
                = vlSelf->system_top__DOT__cpu__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_la_read) 
             | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_la_write))) {
            vlSelf->system_top__DOT__cpu__DOT__mem_addr 
                = (((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch) 
                    | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst))
                    ? (0xfffffffcU & vlSelf->system_top__DOT__cpu__DOT__next_pc)
                    : (0xfffffffcU & vlSelf->system_top__DOT__cpu__DOT__reg_op1));
        }
    }
    if (vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word) {
        vlSelf->system_top__DOT__cpu__DOT__prefetched_high_word = 0U;
    }
    vlSelf->system_top__DOT__cpu__DOT__dbg_next = vlSelf->system_top__DOT__cpu__DOT__launch_next_insn;
    vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger_q 
        = vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger;
    if (vlSelf->system_top__DOT__cpu__DOT__decoder_trigger_q) {
        vlSelf->system_top__DOT__cpu__DOT__cached_ascii_instr 
            = vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr;
        vlSelf->system_top__DOT__cpu__DOT__cached_insn_rd 
            = vlSelf->system_top__DOT__cpu__DOT__decoded_rd;
        vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs1 
            = vlSelf->system_top__DOT__cpu__DOT__decoded_rs1;
        vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs2 
            = vlSelf->system_top__DOT__cpu__DOT__decoded_rs2;
        vlSelf->system_top__DOT__cpu__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode))
                ? vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode
                : (0xffffU & vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode));
        vlSelf->system_top__DOT__cpu__DOT__cached_insn_imm 
            = vlSelf->system_top__DOT__cpu__DOT__decoded_imm;
    }
    if (__Vdlyvset__system_top__DOT__cpu__DOT__cpuregs__v0) {
        vlSelf->system_top__DOT__cpu__DOT__cpuregs[__Vdlyvdim0__system_top__DOT__cpu__DOT__cpuregs__v0] 
            = __Vdlyvval__system_top__DOT__cpu__DOT__cpuregs__v0;
    }
    if (vlSelf->resetn) {
        if ((1U & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__last_mem_valid)))) {
            vlSelf->system_top__DOT__cpu__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlSelf->system_top__DOT__cpu__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelf->system_top__DOT__cpu__DOT__last_mem_valid = 0U;
    if (vlSelf->system_top__DOT__mem_valid) {
        vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode 
            = vlSelf->system_top__DOT__cpu__DOT__mem_rdata;
    }
    vlSelf->__Vdly__trap = 0U;
    __Vdly__system_top__DOT__cpu__DOT__reg_sh = 0U;
    __Vdly__system_top__DOT__cpu__DOT__reg_out = 0U;
    vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rinst = 0U;
    vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rdata = 0U;
    vlSelf->system_top__DOT__cpu__DOT__set_mem_do_wdata = 0U;
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_trigger 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) 
           & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_done));
    vlSelf->system_top__DOT__cpu__DOT__decoder_trigger_q 
        = vlSelf->system_top__DOT__cpu__DOT__decoder_trigger;
    vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_pseudo_trigger = 0U;
    if (vlSelf->resetn) {
        __Vdly__system_top__DOT__cpu__DOT__count_cycle 
            = (1ULL + vlSelf->system_top__DOT__cpu__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) 
                | (8U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) 
               | (4U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) 
              | (2U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) 
             | (1U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) {
                vlSelf->__Vdly__trap = 1U;
            } else if ((0x40U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) {
                vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__do_waitirq))));
                __Vdly__system_top__DOT__cpu__DOT__mem_wordsize = 0U;
                __Vdly__system_top__DOT__cpu__DOT__latched_is_lu = 0U;
                __Vdly__system_top__DOT__cpu__DOT__latched_is_lh = 0U;
                __Vdly__system_top__DOT__cpu__DOT__latched_is_lb = 0U;
                vlSelf->system_top__DOT__cpu__DOT__latched_rd 
                    = vlSelf->system_top__DOT__cpu__DOT__decoded_rd;
                vlSelf->system_top__DOT__cpu__DOT__latched_compr 
                    = vlSelf->system_top__DOT__cpu__DOT__compressed_instr;
                vlSelf->system_top__DOT__cpu__DOT__current_pc 
                    = vlSelf->system_top__DOT__cpu__DOT__reg_next_pc;
                if (vlSelf->system_top__DOT__cpu__DOT__latched_branch) {
                    vlSelf->system_top__DOT__cpu__DOT__current_pc 
                        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelf->system_top__DOT__cpu__DOT__latched_stalu)
                                               ? vlSelf->system_top__DOT__cpu__DOT__alu_out_q
                                               : vlSelf->system_top__DOT__cpu__DOT__reg_out))
                            : vlSelf->system_top__DOT__cpu__DOT__reg_next_pc);
                }
                __Vdly__system_top__DOT__cpu__DOT__reg_pc 
                    = vlSelf->system_top__DOT__cpu__DOT__current_pc;
                vlSelf->system_top__DOT__cpu__DOT__reg_next_pc 
                    = vlSelf->system_top__DOT__cpu__DOT__current_pc;
                vlSelf->system_top__DOT__cpu__DOT__latched_store = 0U;
                vlSelf->system_top__DOT__cpu__DOT__latched_stalu = 0U;
                vlSelf->system_top__DOT__cpu__DOT__latched_branch = 0U;
                if (vlSelf->system_top__DOT__cpu__DOT__decoder_trigger) {
                    __Vdly__system_top__DOT__cpu__DOT__count_instr 
                        = (1ULL + vlSelf->system_top__DOT__cpu__DOT__count_instr);
                    vlSelf->system_top__DOT__cpu__DOT__irq_delay 
                        = vlSelf->system_top__DOT__cpu__DOT__irq_active;
                    vlSelf->system_top__DOT__cpu__DOT__reg_next_pc 
                        = (vlSelf->system_top__DOT__cpu__DOT__current_pc 
                           + ((IData)(vlSelf->system_top__DOT__cpu__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelf->system_top__DOT__cpu__DOT__instr_jal) {
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                        vlSelf->system_top__DOT__cpu__DOT__reg_next_pc 
                            = (vlSelf->system_top__DOT__cpu__DOT__current_pc 
                               + vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j);
                        vlSelf->system_top__DOT__cpu__DOT__latched_branch = 1U;
                    } else {
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = 0U;
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__compressed_instr))));
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) {
                __Vdly__system_top__DOT__cpu__DOT__reg_op1 = 0U;
                vlSelf->system_top__DOT__cpu__DOT__reg_op2 = 0U;
                if ((((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_trap) 
                      | (IData)(vlSelf->system_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal))) {
                    if (vlSelf->system_top__DOT__cpu__DOT__instr_trap) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                        vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val 
                            = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                        vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                        vlSelf->__Vdly__system_top__DOT__pcpi_valid = 1U;
                        __Vdly__system_top__DOT__cpu__DOT__reg_sh 
                            = (0x1fU & vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2);
                        vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                            = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2;
                        vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val 
                            = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2;
                        vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val_valid = 1U;
                        if (vlSelf->system_top__DOT__pcpi_ready) {
                            vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                            vlSelf->__Vdly__system_top__DOT__pcpi_valid = 0U;
                            __Vdly__system_top__DOT__cpu__DOT__reg_out 
                                = vlSelf->system_top__DOT__cpu__DOT__pcpi_int_rd;
                            vlSelf->system_top__DOT__cpu__DOT__latched_store 
                                = vlSelf->system_top__DOT__cpu__DOT__pcpi_int_wr;
                            __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout) 
                                    | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_ecall_ebreak))) {
                            vlSelf->__Vdly__system_top__DOT__pcpi_valid = 0U;
                            __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x80U;
                        }
                    } else if (vlSelf->system_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelf->system_top__DOT__cpu__DOT__instr_rdcycle) {
                            __Vdly__system_top__DOT__cpu__DOT__reg_out 
                                = (IData)(vlSelf->system_top__DOT__cpu__DOT__count_cycle);
                        } else if (vlSelf->system_top__DOT__cpu__DOT__instr_rdcycleh) {
                            __Vdly__system_top__DOT__cpu__DOT__reg_out 
                                = (IData)((vlSelf->system_top__DOT__cpu__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelf->system_top__DOT__cpu__DOT__instr_rdinstr) {
                            __Vdly__system_top__DOT__cpu__DOT__reg_out 
                                = (IData)(vlSelf->system_top__DOT__cpu__DOT__count_instr);
                        } else if (vlSelf->system_top__DOT__cpu__DOT__instr_rdinstrh) {
                            __Vdly__system_top__DOT__cpu__DOT__reg_out 
                                = (IData)((vlSelf->system_top__DOT__cpu__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelf->system_top__DOT__cpu__DOT__latched_store = 1U;
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lui)
                                ? 0U : vlSelf->system_top__DOT__cpu__DOT__reg_pc);
                        vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                            = vlSelf->system_top__DOT__cpu__DOT__decoded_imm;
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst 
                            = vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch;
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 8U;
                    } else {
                        vlSelf->system_top__DOT__cpu__DOT__latched_store = 1U;
                        __Vdly__system_top__DOT__cpu__DOT__reg_out 
                            = vlSelf->system_top__DOT__cpu__DOT__timer;
                        vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val 
                            = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                        vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
                        vlSelf->system_top__DOT__cpu__DOT__timer 
                            = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_trap)))) {
                    __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__system_top__DOT__cpu__DOT__cpu_state = 1U;
                    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                } else if (vlSelf->system_top__DOT__cpu__DOT__is_slli_srli_srai) {
                    __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__system_top__DOT__cpu__DOT__reg_sh 
                        = vlSelf->system_top__DOT__cpu__DOT__decoded_rs2;
                    __Vdly__system_top__DOT__cpu__DOT__cpu_state = 4U;
                } else if (vlSelf->system_top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                        = vlSelf->system_top__DOT__cpu__DOT__decoded_imm;
                    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst 
                        = vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch;
                    __Vdly__system_top__DOT__cpu__DOT__cpu_state = 8U;
                } else {
                    __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__system_top__DOT__cpu__DOT__reg_sh 
                        = (0x1fU & vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2);
                    vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val 
                        = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2;
                    vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw) {
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 2U;
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                    } else if (vlSelf->system_top__DOT__cpu__DOT__is_sll_srl_sra) {
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 4U;
                    } else {
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst 
                            = vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch;
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) {
                __Vdly__system_top__DOT__cpu__DOT__reg_sh 
                    = (0x1fU & vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2);
                vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                    = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2;
                vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val 
                    = vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2;
                vlSelf->system_top__DOT__cpu__DOT__dbg_rs2val_valid = 1U;
                if (vlSelf->system_top__DOT__cpu__DOT__instr_trap) {
                    vlSelf->__Vdly__system_top__DOT__pcpi_valid = 1U;
                    if (vlSelf->system_top__DOT__pcpi_ready) {
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                        vlSelf->__Vdly__system_top__DOT__pcpi_valid = 0U;
                        __Vdly__system_top__DOT__cpu__DOT__reg_out 
                            = vlSelf->system_top__DOT__cpu__DOT__pcpi_int_rd;
                        vlSelf->system_top__DOT__cpu__DOT__latched_store 
                            = vlSelf->system_top__DOT__cpu__DOT__pcpi_int_wr;
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout) 
                                | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_ecall_ebreak))) {
                        vlSelf->__Vdly__system_top__DOT__pcpi_valid = 0U;
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x80U;
                    }
                } else if (vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw) {
                    __Vdly__system_top__DOT__cpu__DOT__cpu_state = 2U;
                    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                } else if (vlSelf->system_top__DOT__cpu__DOT__is_sll_srl_sra) {
                    __Vdly__system_top__DOT__cpu__DOT__cpu_state = 4U;
                } else {
                    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst 
                        = vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch;
                    __Vdly__system_top__DOT__cpu__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) {
                __Vdly__system_top__DOT__cpu__DOT__reg_out 
                    = (vlSelf->system_top__DOT__cpu__DOT__reg_pc 
                       + vlSelf->system_top__DOT__cpu__DOT__decoded_imm);
                if (vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelf->system_top__DOT__cpu__DOT__latched_rd = 0U;
                    vlSelf->system_top__DOT__cpu__DOT__latched_store 
                        = vlSelf->system_top__DOT__cpu__DOT__alu_out_0;
                    vlSelf->system_top__DOT__cpu__DOT__latched_branch 
                        = vlSelf->system_top__DOT__cpu__DOT__alu_out_0;
                    if (vlSelf->system_top__DOT__cpu__DOT__mem_done) {
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelf->system_top__DOT__cpu__DOT__alu_out_0) {
                        vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rinst = 1U;
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelf->system_top__DOT__cpu__DOT__latched_branch 
                        = vlSelf->system_top__DOT__cpu__DOT__instr_jalr;
                    vlSelf->system_top__DOT__cpu__DOT__latched_store = 1U;
                    vlSelf->system_top__DOT__cpu__DOT__latched_stalu = 1U;
                    __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) {
                vlSelf->system_top__DOT__cpu__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelf->system_top__DOT__cpu__DOT__reg_sh))) {
                    __Vdly__system_top__DOT__cpu__DOT__reg_out 
                        = vlSelf->system_top__DOT__cpu__DOT__reg_op1;
                    vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst 
                        = vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch;
                    __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelf->system_top__DOT__cpu__DOT__reg_sh))) {
                    if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_slli) 
                         | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sll))) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelf->system_top__DOT__cpu__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srli) 
                                | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srl))) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelf->system_top__DOT__cpu__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srai) 
                                | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sra))) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->system_top__DOT__cpu__DOT__reg_op1, 4U);
                    }
                    __Vdly__system_top__DOT__cpu__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->system_top__DOT__cpu__DOT__reg_sh) 
                                    - (IData)(4U)));
                } else {
                    if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_slli) 
                         | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sll))) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelf->system_top__DOT__cpu__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srli) 
                                | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srl))) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelf->system_top__DOT__cpu__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_srai) 
                                | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sra))) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->system_top__DOT__cpu__DOT__reg_op1, 1U);
                    }
                    __Vdly__system_top__DOT__cpu__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->system_top__DOT__cpu__DOT__reg_sh) 
                                    - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata)))) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                               + vlSelf->system_top__DOT__cpu__DOT__decoded_imm);
                        vlSelf->system_top__DOT__cpu__DOT__set_mem_do_wdata = 1U;
                        if (vlSelf->system_top__DOT__cpu__DOT__instr_sb) {
                            __Vdly__system_top__DOT__cpu__DOT__mem_wordsize = 2U;
                        } else if (vlSelf->system_top__DOT__cpu__DOT__instr_sh) {
                            __Vdly__system_top__DOT__cpu__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->system_top__DOT__cpu__DOT__instr_sw) {
                            __Vdly__system_top__DOT__cpu__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_done))) {
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_trigger = 1U;
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelf->system_top__DOT__cpu__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_done))) {
                        if (vlSelf->system_top__DOT__cpu__DOT__latched_is_lu) {
                            __Vdly__system_top__DOT__cpu__DOT__reg_out 
                                = vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word;
                        } else if (vlSelf->system_top__DOT__cpu__DOT__latched_is_lh) {
                            __Vdly__system_top__DOT__cpu__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word));
                        } else if (vlSelf->system_top__DOT__cpu__DOT__latched_is_lb) {
                            __Vdly__system_top__DOT__cpu__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word));
                        }
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_trigger = 1U;
                        vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata)))) {
                        __Vdly__system_top__DOT__cpu__DOT__reg_op1 
                            = (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                               + vlSelf->system_top__DOT__cpu__DOT__decoded_imm);
                        vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lb) 
                             | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lbu))) {
                            __Vdly__system_top__DOT__cpu__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lh) 
                                    | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lhu))) {
                            __Vdly__system_top__DOT__cpu__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->system_top__DOT__cpu__DOT__instr_lw) {
                            __Vdly__system_top__DOT__cpu__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__system_top__DOT__cpu__DOT__latched_is_lu 
                            = vlSelf->system_top__DOT__cpu__DOT__is_lbu_lhu_lw;
                        __Vdly__system_top__DOT__cpu__DOT__latched_is_lh 
                            = vlSelf->system_top__DOT__cpu__DOT__instr_lh;
                        __Vdly__system_top__DOT__cpu__DOT__latched_is_lb 
                            = vlSelf->system_top__DOT__cpu__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__system_top__DOT__cpu__DOT__count_cycle = 0ULL;
        __Vdly__system_top__DOT__cpu__DOT__count_instr = 0ULL;
        vlSelf->system_top__DOT__cpu__DOT__timer = 0U;
        __Vdly__system_top__DOT__cpu__DOT__reg_pc = 0U;
        vlSelf->system_top__DOT__cpu__DOT__reg_next_pc = 0U;
        vlSelf->system_top__DOT__cpu__DOT__latched_store = 0U;
        vlSelf->system_top__DOT__cpu__DOT__latched_stalu = 0U;
        vlSelf->system_top__DOT__cpu__DOT__latched_branch = 0U;
        __Vdly__system_top__DOT__cpu__DOT__latched_is_lu = 0U;
        __Vdly__system_top__DOT__cpu__DOT__latched_is_lh = 0U;
        __Vdly__system_top__DOT__cpu__DOT__latched_is_lb = 0U;
        vlSelf->__Vdly__system_top__DOT__pcpi_valid = 0U;
        vlSelf->system_top__DOT__cpu__DOT__irq_delay = 0U;
        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x40U;
    }
    if (((IData)(vlSelf->resetn) & ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata) 
                                    | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)))) {
            __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize)) 
             & vlSelf->system_top__DOT__cpu__DOT__reg_op1)) {
            __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSelf->resetn) & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelf->system_top__DOT__cpu__DOT__reg_pc)))) {
        __Vdly__system_top__DOT__cpu__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelf->resetn)) | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_done)))) {
        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_prefetch = 0U;
        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = 0U;
        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rdata = 0U;
        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_wdata = 0U;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rinst) {
        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst = 1U;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__set_mem_do_rdata) {
        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rdata = 1U;
    }
    if (vlSelf->system_top__DOT__cpu__DOT__set_mem_do_wdata) {
        vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_wdata = 1U;
    }
    vlSelf->system_top__DOT__cpu__DOT__current_pc = 0U;
    vlSelf->system_top__DOT__cpu__DOT__reg_sh = __Vdly__system_top__DOT__cpu__DOT__reg_sh;
    vlSelf->system_top__DOT__cpu__DOT__count_cycle 
        = __Vdly__system_top__DOT__cpu__DOT__count_cycle;
    vlSelf->system_top__DOT__cpu__DOT__latched_is_lu 
        = __Vdly__system_top__DOT__cpu__DOT__latched_is_lu;
    vlSelf->system_top__DOT__cpu__DOT__latched_is_lh 
        = __Vdly__system_top__DOT__cpu__DOT__latched_is_lh;
    vlSelf->system_top__DOT__cpu__DOT__latched_is_lb 
        = __Vdly__system_top__DOT__cpu__DOT__latched_is_lb;
    vlSelf->system_top__DOT__cpu__DOT__count_instr 
        = __Vdly__system_top__DOT__cpu__DOT__count_instr;
    vlSelf->system_top__DOT__cpu__DOT__reg_pc = __Vdly__system_top__DOT__cpu__DOT__reg_pc;
    vlSelf->system_top__DOT__cpu__DOT__mem_wordsize 
        = __Vdly__system_top__DOT__cpu__DOT__mem_wordsize;
    vlSelf->system_top__DOT__cpu__DOT__reg_out = __Vdly__system_top__DOT__cpu__DOT__reg_out;
    vlSelf->system_top__DOT__cpu__DOT__cpu_state = __Vdly__system_top__DOT__cpu__DOT__cpu_state;
    vlSelf->system_top__DOT__cpu__DOT__reg_op1 = __Vdly__system_top__DOT__cpu__DOT__reg_op1;
    if (((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_done))) {
        vlSelf->system_top__DOT__cpu__DOT__instr_waitirq = 0U;
        vlSelf->system_top__DOT__cpu__DOT__decoded_rs1 
            = (0x1fU & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                        >> 0xfU));
    }
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelf->system_top__DOT__cpu__DOT__decoded_rs1))
            ? vlSelf->system_top__DOT__cpu__DOT__cpuregs
           [vlSelf->system_top__DOT__cpu__DOT__decoded_rs1]
            : 0U);
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_rs1;
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_opcode;
    vlSelf->system_top__DOT__cpu__DOT__do_waitirq = 0U;
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
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_write = 0U;
    vlSelf->system_top__DOT__cpu__DOT__next_pc = (((IData)(vlSelf->system_top__DOT__cpu__DOT__latched_branch) 
                                                   & (IData)(vlSelf->system_top__DOT__cpu__DOT__latched_store))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlSelf->system_top__DOT__cpu__DOT__reg_out)
                                                   : vlSelf->system_top__DOT__cpu__DOT__reg_next_pc);
    vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word 
        = vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__prefetched_high_word)))) {
        vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->resetn)))) {
        vlSelf->system_top__DOT__cpu__DOT__irq_state = 0U;
    }
    if ((1U & (((IData)(vlSelf->system_top__DOT__cpu__DOT__latched_branch) 
                | (0U != (IData)(vlSelf->system_top__DOT__cpu__DOT__irq_state))) 
               | (~ (IData)(vlSelf->resetn))))) {
        vlSelf->system_top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelf->system_top__DOT__cpu__DOT__alu_out_q = vlSelf->system_top__DOT__cpu__DOT__alu_out;
    if ((((IData)(vlSelf->resetn) & (IData)(vlSelf->system_top__DOT__pcpi_valid)) 
         & (~ (IData)(vlSelf->system_top__DOT__pcpi_wait)))) {
        if ((0U != (IData)(vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout_counter))) {
            __Vdly__system_top__DOT__cpu__DOT__pcpi_timeout_counter 
                = (0xfU & ((IData)(vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout_counter) 
                           - (IData)(1U)));
        }
    } else {
        __Vdly__system_top__DOT__cpu__DOT__pcpi_timeout_counter = 0xfU;
    }
    vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout_counter)))));
    if (((IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlSelf->system_top__DOT__cpu__DOT__instr_setq = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_getq = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_maskirq = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_timer = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_fence 
            = ((0xfU == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)) 
               & (~ (IData)((0U != (7U & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                          >> 0xcU))))));
    }
    if ((0U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wdata 
            = vlSelf->system_top__DOT__cpu__DOT__reg_op2;
        vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word 
            = vlSelf->system_top__DOT__cpu__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wdata 
            = ((vlSelf->system_top__DOT__cpu__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelf->system_top__DOT__cpu__DOT__reg_op2));
        if ((2U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)) {
            if ((2U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)) {
                vlSelf->system_top__DOT__cpu__DOT__mem_rdata_word 
                    = (vlSelf->system_top__DOT__cpu__DOT__mem_rdata 
                       >> 0x10U);
            }
        } else {
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
    vlSelf->system_top__DOT__cpu__DOT__alu_eq = (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                                 == vlSelf->system_top__DOT__cpu__DOT__reg_op2);
    vlSelf->system_top__DOT__cpu__DOT__alu_lts = VL_LTS_III(32, vlSelf->system_top__DOT__cpu__DOT__reg_op1, vlSelf->system_top__DOT__cpu__DOT__reg_op2);
    vlSelf->system_top__DOT__cpu__DOT__alu_ltu = (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
                                                  < vlSelf->system_top__DOT__cpu__DOT__reg_op2);
    vlSelf->system_top__DOT__cpu__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lbu) 
           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lhu) 
              | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lw)));
    vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout_counter 
        = __Vdly__system_top__DOT__cpu__DOT__pcpi_timeout_counter;
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
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_rd;
    if (((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_done))) {
        vlSelf->system_top__DOT__cpu__DOT__decoded_rd 
            = (0x1fU & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                        >> 7U));
        vlSelf->system_top__DOT__cpu__DOT__decoded_rs2 
            = (0x1fU & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                        >> 0x14U));
    }
    vlSelf->system_top__DOT__cpu__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelf->system_top__DOT__cpu__DOT__decoded_rs2))
            ? vlSelf->system_top__DOT__cpu__DOT__cpuregs
           [vlSelf->system_top__DOT__cpu__DOT__decoded_rs2]
            : 0U);
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_rs2;
    if (((IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlSelf->system_top__DOT__cpu__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                     >> 0x15U))))) 
               & (~ (IData)((0U != (0x1fffU & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                               >> 7U))))));
        vlSelf->system_top__DOT__cpu__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))));
        vlSelf->system_top__DOT__cpu__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))));
        vlSelf->system_top__DOT__cpu__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
    }
    vlSelf->system_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_rdinstrh))));
    vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lui) 
           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_auipc) 
              | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_jal)));
    vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lui) 
           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_auipc) 
              | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_jal) 
                 | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_jalr) 
                    | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_addi) 
                       | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_add) 
                          | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sub)))))));
    vlSelf->system_top__DOT__cpu__DOT__is_slti_blt_slt 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_slti) 
           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_blt) 
              | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_slt)));
    vlSelf->system_top__DOT__cpu__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sltiu) 
           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_bltu) 
              | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sltu)));
    vlSelf->system_top__DOT__cpu__DOT__is_compare = 
        ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
         | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_slti) 
            | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_slt) 
               | ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sltiu) 
                  | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_sltu)))));
    if (((IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlSelf->system_top__DOT__cpu__DOT__instr_beq 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_bne 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x1000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_blt 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x4000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_bge 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x5000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_bltu 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x6000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_bgeu 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x7000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_lb 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_lh 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x1000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_lw 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x2000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_lbu 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x4000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_lhu 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x5000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_sb 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw) 
               & (0U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_sh 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw) 
               & (0x1000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_sw 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw) 
               & (0x2000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_addi 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_slti 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x2000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_sltiu 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x3000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_xori 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x4000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_ori 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x6000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_andi 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x7000U == (0x7000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_slli 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x1000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_srli 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x5000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_srai 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__is_slli_srli_srai 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))))));
        vlSelf->system_top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_jalr) 
               | ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlSelf->system_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelf->system_top__DOT__cpu__DOT__is_compare = 0U;
        vlSelf->system_top__DOT__cpu__DOT__decoded_imm 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_jal)
                ? vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j
                : (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_lui) 
                    | (IData)(vlSelf->system_top__DOT__cpu__DOT__instr_auipc))
                    ? VL_SHIFTL_III(32,32,32, (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                               >> 0xcU), 0xcU)
                    : (((IData)(vlSelf->system_top__DOT__cpu__DOT__instr_jalr) 
                        | ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelf->system_top__DOT__cpu__DOT__instr_add 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_sub 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_sll 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x1000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_slt 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x2000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_sltu 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x3000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_xor 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x4000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_srl 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x5000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_sra 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_or 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x6000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__instr_and 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x7000U == (0xfe007000U & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelf->system_top__DOT__cpu__DOT__is_sll_srl_sra 
            = ((IData)(vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q))))));
    }
    if (((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_done))) {
        vlSelf->system_top__DOT__cpu__DOT__compressed_instr = 0U;
        vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
        vlSelf->system_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
        vlSelf->system_top__DOT__cpu__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
        vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffffU & vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                  >> 0xbU)))));
        vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            << 2U)));
        vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelf->system_top__DOT__cpu__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
                                               >> 0xbU)))));
        vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
        vlSelf->system_top__DOT__cpu__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
        vlSelf->system_top__DOT__cpu__DOT__instr_lui 
            = (0x37U == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
        vlSelf->system_top__DOT__cpu__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
        vlSelf->system_top__DOT__cpu__DOT__instr_jalr 
            = (IData)((0x67U == (0x707fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle)));
        vlSelf->system_top__DOT__cpu__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlSelf->resetn)))) {
        vlSelf->system_top__DOT__cpu__DOT__instr_fence = 0U;
        vlSelf->system_top__DOT__cpu__DOT__irq_active = 0U;
        vlSelf->system_top__DOT__cpu__DOT__pcpi_timeout = 0U;
        vlSelf->system_top__DOT__cpu__DOT__is_compare = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_beq = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_bne = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_blt = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_bge = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_bltu = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_bgeu = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_addi = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_slti = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_sltiu = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_xori = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_ori = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_andi = 0U;
        vlSelf->system_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_add = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_sub = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_sll = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_slt = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_sltu = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_xor = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_srl = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_sra = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_or = 0U;
        vlSelf->system_top__DOT__cpu__DOT__instr_and = 0U;
    }
    vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm 
        = vlSelf->system_top__DOT__cpu__DOT__q_insn_imm;
    vlSelf->system_top__DOT__cpu__DOT__alu_out_0 = 0U;
    vlSelf->system_top__DOT__cpu__DOT__alu_out = 0U;
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
    vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr 
        = vlSelf->system_top__DOT__cpu__DOT__q_ascii_instr;
    if (vlSelf->system_top__DOT__cpu__DOT__dbg_next) {
        if (vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger_q) {
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs1;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_opcode;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_rd;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_rs2;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelf->system_top__DOT__cpu__DOT__cached_insn_imm;
            vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelf->system_top__DOT__cpu__DOT__cached_ascii_instr;
        } else {
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelf->system_top__DOT__cpu__DOT__decoded_rs1;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode))
                    ? vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode
                    : (0xffffU & vlSelf->system_top__DOT__cpu__DOT__next_insn_opcode));
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelf->system_top__DOT__cpu__DOT__decoded_rd;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelf->system_top__DOT__cpu__DOT__decoded_rs2;
            vlSelf->system_top__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelf->system_top__DOT__cpu__DOT__decoded_imm;
            vlSelf->system_top__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelf->system_top__DOT__cpu__DOT__new_ascii_instr;
        }
    }
}

VL_INLINE_OPT void Vsystem_top___024root___nba_sequent__TOP__1(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->resetn) {
        vlSelf->system_top__DOT__pcpi_wr = 0U;
        vlSelf->system_top__DOT__pcpi_ready = 0U;
        if (((IData)(vlSelf->system_top__DOT__pcpi_valid) 
             & (0xbU == (0x7fU & vlSelf->system_top__DOT__pcpi_insn)))) {
            vlSelf->system_top__DOT__pcpi_wr = 1U;
            vlSelf->system_top__DOT__pcpi_rd = vlSelf->system_top__DOT__accelerator__DOT__next_result;
            vlSelf->system_top__DOT__accelerator__DOT__accumulator 
                = vlSelf->system_top__DOT__accelerator__DOT__next_result;
            vlSelf->system_top__DOT__pcpi_ready = 1U;
        }
    } else {
        vlSelf->system_top__DOT__pcpi_wr = 0U;
        vlSelf->system_top__DOT__pcpi_rd = 0U;
        vlSelf->system_top__DOT__accelerator__DOT__accumulator = 0U;
        vlSelf->system_top__DOT__pcpi_ready = 0U;
    }
    vlSelf->system_top__DOT__pcpi_wait = 0U;
    vlSelf->system_top__DOT__cpu__DOT__pcpi_int_wr = 0U;
    vlSelf->system_top__DOT__cpu__DOT__pcpi_int_rd = 0U;
    if (vlSelf->system_top__DOT__pcpi_ready) {
        vlSelf->system_top__DOT__cpu__DOT__pcpi_int_wr 
            = vlSelf->system_top__DOT__pcpi_wr;
        vlSelf->system_top__DOT__cpu__DOT__pcpi_int_rd 
            = vlSelf->system_top__DOT__pcpi_rd;
    }
}

VL_INLINE_OPT void Vsystem_top___024root___nba_sequent__TOP__2(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->system_top__DOT__pcpi_valid = vlSelf->__Vdly__system_top__DOT__pcpi_valid;
    if (((IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlSelf->system_top__DOT__pcpi_insn = vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q;
    }
    vlSelf->system_top__DOT__cpu__DOT__decoder_pseudo_trigger 
        = vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_pseudo_trigger;
    vlSelf->system_top__DOT__cpu__DOT__decoder_trigger 
        = vlSelf->__Vdly__system_top__DOT__cpu__DOT__decoder_trigger;
    vlSelf->system_top__DOT__cpu__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelf->system_top__DOT__cpu__DOT__cpu_state)) 
           & (IData)(vlSelf->system_top__DOT__cpu__DOT__decoder_trigger));
    if (vlSelf->system_top__DOT__mem_valid) {
        vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q 
            = vlSelf->system_top__DOT__cpu__DOT__mem_rdata;
    }
    if ((1U & ((~ (IData)(vlSelf->resetn)) | (IData)(vlSelf->trap)))) {
        if ((1U & (~ (IData)(vlSelf->resetn)))) {
            vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_state = 0U;
        }
        vlSelf->system_top__DOT__mem_valid = 0U;
        vlSelf->system_top__DOT__cpu__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_la_read) 
             | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_la_write))) {
            vlSelf->system_top__DOT__cpu__DOT__mem_wstrb 
                = ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state))) {
            if ((((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch) 
                  | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst)) 
                 | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata))) {
                vlSelf->system_top__DOT__mem_valid = 1U;
                vlSelf->system_top__DOT__cpu__DOT__mem_instr 
                    = ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch) 
                       | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst));
                vlSelf->system_top__DOT__cpu__DOT__mem_wstrb = 0U;
                vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_state = 1U;
            }
            if (vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata) {
                vlSelf->system_top__DOT__mem_valid = 1U;
                vlSelf->system_top__DOT__cpu__DOT__mem_instr = 0U;
                vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state))) {
            if (vlSelf->system_top__DOT__cpu__DOT__dbg_mem_valid) {
                vlSelf->system_top__DOT__mem_valid = 0U;
                vlSelf->system_top__DOT__cpu__DOT__mem_la_secondword = 0U;
                vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_state 
                    = (((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) 
                        | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state))) {
            if (vlSelf->system_top__DOT__cpu__DOT__dbg_mem_valid) {
                vlSelf->system_top__DOT__mem_valid = 0U;
                vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state))) {
            if (vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) {
                vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_state = 0U;
            }
        }
    }
    vlSelf->system_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelf->system_top__DOT__mem_valid)
            ? vlSelf->system_top__DOT__cpu__DOT__mem_rdata
            : vlSelf->system_top__DOT__cpu__DOT__mem_rdata_q);
    if ((0U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb = 0xfU;
    } else if ((1U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb 
            = ((2U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)
                ? 0xcU : 3U);
    } else if ((2U == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelf->system_top__DOT__cpu__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelf->system_top__DOT__cpu__DOT__reg_op1)));
    }
    vlSelf->trap = vlSelf->__Vdly__trap;
    vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch 
        = vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_prefetch;
    vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata 
        = vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_wdata;
    vlSelf->system_top__DOT__cpu__DOT__mem_state = vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_state;
    vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata 
        = vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rdata;
    vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst 
        = vlSelf->__Vdly__system_top__DOT__cpu__DOT__mem_do_rinst;
    vlSelf->system_top__DOT__cpu__DOT__dbg_mem_valid 
        = vlSelf->system_top__DOT__mem_valid;
    vlSelf->system_top__DOT__cpu__DOT__mem_la_write 
        = ((IData)(vlSelf->resetn) & ((~ (IData)((0U 
                                                  != (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)))) 
                                      & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata)));
    vlSelf->system_top__DOT__cpu__DOT__mem_la_read 
        = ((IData)(vlSelf->resetn) & ((~ (IData)((0U 
                                                  != (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)))) 
                                      & ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) 
                                         | ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_prefetch) 
                                            | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata)))));
    vlSelf->system_top__DOT__cpu__DOT____VdfgTmp_hb06275b1__0 
        = ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst) 
           | ((IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rdata) 
              | (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_wdata)));
    vlSelf->system_top__DOT__cpu__DOT__mem_done = ((IData)(vlSelf->resetn) 
                                                   & (((IData)(vlSelf->system_top__DOT__mem_valid) 
                                                       & ((0U 
                                                           != (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)) 
                                                          & (IData)(vlSelf->system_top__DOT__cpu__DOT____VdfgTmp_hb06275b1__0))) 
                                                      | ((3U 
                                                          == (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_state)) 
                                                         & (IData)(vlSelf->system_top__DOT__cpu__DOT__mem_do_rinst))));
}

VL_INLINE_OPT void Vsystem_top___024root___nba_comb__TOP__0(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->system_top__DOT__accelerator__DOT__sum 
        = (vlSelf->system_top__DOT__accelerator__DOT__accumulator 
           + (vlSelf->system_top__DOT__cpu__DOT__reg_op1 
              * vlSelf->system_top__DOT__cpu__DOT__reg_op2));
    vlSelf->system_top__DOT__accelerator__DOT__next_result 
        = ((IData)(((0x1000U == (0x7000U & vlSelf->system_top__DOT__pcpi_insn)) 
                    & (vlSelf->system_top__DOT__accelerator__DOT__sum 
                       >> 0x1fU))) ? 0U : vlSelf->system_top__DOT__accelerator__DOT__sum);
}

void Vsystem_top___024root___eval_nba(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsystem_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsystem_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsystem_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsystem_top___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vsystem_top___024root___eval_triggers__act(Vsystem_top___024root* vlSelf);

bool Vsystem_top___024root___eval_phase__act(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsystem_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsystem_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsystem_top___024root___eval_phase__nba(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsystem_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystem_top___024root___dump_triggers__ico(Vsystem_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystem_top___024root___dump_triggers__nba(Vsystem_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystem_top___024root___dump_triggers__act(Vsystem_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsystem_top___024root___eval(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vsystem_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/system_top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsystem_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsystem_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/system_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsystem_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/system_top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsystem_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsystem_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsystem_top___024root___eval_debug_assertions(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG
