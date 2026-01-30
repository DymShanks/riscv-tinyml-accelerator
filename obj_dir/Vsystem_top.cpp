// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsystem_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsystem_top::Vsystem_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsystem_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , trap{vlSymsp->TOP.trap}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsystem_top::Vsystem_top(const char* _vcname__)
    : Vsystem_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsystem_top::~Vsystem_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsystem_top___024root___eval_debug_assertions(Vsystem_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsystem_top___024root___eval_static(Vsystem_top___024root* vlSelf);
void Vsystem_top___024root___eval_initial(Vsystem_top___024root* vlSelf);
void Vsystem_top___024root___eval_settle(Vsystem_top___024root* vlSelf);
void Vsystem_top___024root___eval(Vsystem_top___024root* vlSelf);

void Vsystem_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsystem_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsystem_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsystem_top___024root___eval_static(&(vlSymsp->TOP));
        Vsystem_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsystem_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsystem_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsystem_top::eventsPending() { return false; }

uint64_t Vsystem_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsystem_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsystem_top___024root___eval_final(Vsystem_top___024root* vlSelf);

VL_ATTR_COLD void Vsystem_top::final() {
    Vsystem_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsystem_top::hierName() const { return vlSymsp->name(); }
const char* Vsystem_top::modelName() const { return "Vsystem_top"; }
unsigned Vsystem_top::threads() const { return 1; }
void Vsystem_top::prepareClone() const { contextp()->prepareClone(); }
void Vsystem_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsystem_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsystem_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsystem_top___024root__trace_init_top(Vsystem_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsystem_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystem_top___024root*>(voidSelf);
    Vsystem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsystem_top___024root__trace_decl_types(tracep);
    Vsystem_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsystem_top___024root__trace_register(Vsystem_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsystem_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsystem_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsystem_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
