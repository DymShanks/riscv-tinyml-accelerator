// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystem_top.h for the primary calling header

#include "Vsystem_top__pch.h"
#include "Vsystem_top__Syms.h"
#include "Vsystem_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystem_top___024root___dump_triggers__stl(Vsystem_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystem_top___024root___eval_triggers__stl(Vsystem_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystem_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
