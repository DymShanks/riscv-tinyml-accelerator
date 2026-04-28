// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinyml_accelerator.h for the primary calling header

#include "Vtinyml_accelerator__pch.h"
#include "Vtinyml_accelerator__Syms.h"
#include "Vtinyml_accelerator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyml_accelerator___024root___dump_triggers__ico(Vtinyml_accelerator___024root* vlSelf);
#endif  // VL_DEBUG

void Vtinyml_accelerator___024root___eval_triggers__ico(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtinyml_accelerator___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyml_accelerator___024root___dump_triggers__act(Vtinyml_accelerator___024root* vlSelf);
#endif  // VL_DEBUG

void Vtinyml_accelerator___024root___eval_triggers__act(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->resetn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__resetn__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = vlSelf->resetn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtinyml_accelerator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
