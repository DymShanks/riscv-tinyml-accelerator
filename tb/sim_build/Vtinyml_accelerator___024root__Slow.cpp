// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinyml_accelerator.h for the primary calling header

#include "Vtinyml_accelerator__pch.h"
#include "Vtinyml_accelerator__Syms.h"
#include "Vtinyml_accelerator___024root.h"

void Vtinyml_accelerator___024root___ctor_var_reset(Vtinyml_accelerator___024root* vlSelf);

Vtinyml_accelerator___024root::Vtinyml_accelerator___024root(Vtinyml_accelerator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtinyml_accelerator___024root___ctor_var_reset(this);
}

void Vtinyml_accelerator___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtinyml_accelerator___024root::~Vtinyml_accelerator___024root() {
}
