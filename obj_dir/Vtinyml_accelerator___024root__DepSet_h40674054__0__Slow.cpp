// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinyml_accelerator.h for the primary calling header

#include "Vtinyml_accelerator__pch.h"
#include "Vtinyml_accelerator__Syms.h"
#include "Vtinyml_accelerator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyml_accelerator___024root___dump_triggers__stl(Vtinyml_accelerator___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtinyml_accelerator___024root___eval_triggers__stl(Vtinyml_accelerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyml_accelerator___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtinyml_accelerator___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
