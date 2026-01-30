// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinyml_accelerator.h for the primary calling header

#include "Vtinyml_accelerator__pch.h"
#include "Vtinyml_accelerator___024root.h"

VL_ATTR_COLD void Vtinyml_accelerator___024root___eval_static(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtinyml_accelerator___024root___eval_initial(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = vlSelf->resetn;
}

VL_ATTR_COLD void Vtinyml_accelerator___024root___eval_final(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyml_accelerator___024root___dump_triggers__stl(Vtinyml_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtinyml_accelerator___024root___eval_phase__stl(Vtinyml_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtinyml_accelerator___024root___eval_settle(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___eval_settle\n"); );
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
            Vtinyml_accelerator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/tinyml_accelerator.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtinyml_accelerator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyml_accelerator___024root___dump_triggers__stl(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtinyml_accelerator___024root___ico_sequent__TOP__0(Vtinyml_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtinyml_accelerator___024root___eval_stl(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtinyml_accelerator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtinyml_accelerator___024root___eval_triggers__stl(Vtinyml_accelerator___024root* vlSelf);

VL_ATTR_COLD bool Vtinyml_accelerator___024root___eval_phase__stl(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtinyml_accelerator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtinyml_accelerator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyml_accelerator___024root___dump_triggers__ico(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtinyml_accelerator___024root___dump_triggers__act(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyml_accelerator___024root___dump_triggers__nba(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtinyml_accelerator___024root___ctor_var_reset(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->pcpi_rs1 = VL_RAND_RESET_I(32);
    vlSelf->pcpi_rs2 = VL_RAND_RESET_I(32);
    vlSelf->pcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->pcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->pcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->pcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->tinyml_accelerator__DOT__accumulator = VL_RAND_RESET_I(32);
    vlSelf->tinyml_accelerator__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->tinyml_accelerator__DOT__next_result = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = VL_RAND_RESET_I(1);
}
