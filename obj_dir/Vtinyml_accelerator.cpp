// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtinyml_accelerator__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtinyml_accelerator::Vtinyml_accelerator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtinyml_accelerator__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , pcpi_valid{vlSymsp->TOP.pcpi_valid}
    , pcpi_wr{vlSymsp->TOP.pcpi_wr}
    , pcpi_wait{vlSymsp->TOP.pcpi_wait}
    , pcpi_ready{vlSymsp->TOP.pcpi_ready}
    , pcpi_insn{vlSymsp->TOP.pcpi_insn}
    , pcpi_rs1{vlSymsp->TOP.pcpi_rs1}
    , pcpi_rs2{vlSymsp->TOP.pcpi_rs2}
    , pcpi_rd{vlSymsp->TOP.pcpi_rd}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtinyml_accelerator::Vtinyml_accelerator(const char* _vcname__)
    : Vtinyml_accelerator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtinyml_accelerator::~Vtinyml_accelerator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtinyml_accelerator___024root___eval_debug_assertions(Vtinyml_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
void Vtinyml_accelerator___024root___eval_static(Vtinyml_accelerator___024root* vlSelf);
void Vtinyml_accelerator___024root___eval_initial(Vtinyml_accelerator___024root* vlSelf);
void Vtinyml_accelerator___024root___eval_settle(Vtinyml_accelerator___024root* vlSelf);
void Vtinyml_accelerator___024root___eval(Vtinyml_accelerator___024root* vlSelf);

void Vtinyml_accelerator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtinyml_accelerator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtinyml_accelerator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtinyml_accelerator___024root___eval_static(&(vlSymsp->TOP));
        Vtinyml_accelerator___024root___eval_initial(&(vlSymsp->TOP));
        Vtinyml_accelerator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtinyml_accelerator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtinyml_accelerator::eventsPending() { return false; }

uint64_t Vtinyml_accelerator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtinyml_accelerator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtinyml_accelerator___024root___eval_final(Vtinyml_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtinyml_accelerator::final() {
    Vtinyml_accelerator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtinyml_accelerator::hierName() const { return vlSymsp->name(); }
const char* Vtinyml_accelerator::modelName() const { return "Vtinyml_accelerator"; }
unsigned Vtinyml_accelerator::threads() const { return 1; }
void Vtinyml_accelerator::prepareClone() const { contextp()->prepareClone(); }
void Vtinyml_accelerator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtinyml_accelerator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtinyml_accelerator___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtinyml_accelerator___024root__trace_init_top(Vtinyml_accelerator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtinyml_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinyml_accelerator___024root*>(voidSelf);
    Vtinyml_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtinyml_accelerator___024root__trace_decl_types(tracep);
    Vtinyml_accelerator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtinyml_accelerator___024root__trace_register(Vtinyml_accelerator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtinyml_accelerator::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtinyml_accelerator::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtinyml_accelerator___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
