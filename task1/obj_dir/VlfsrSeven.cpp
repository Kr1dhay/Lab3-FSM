// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VlfsrSeven.h"
#include "VlfsrSeven__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VlfsrSeven::VlfsrSeven(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VlfsrSeven__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VlfsrSeven::VlfsrSeven(const char* _vcname__)
    : VlfsrSeven(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VlfsrSeven::~VlfsrSeven() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VlfsrSeven___024root___eval_initial(VlfsrSeven___024root* vlSelf);
void VlfsrSeven___024root___eval_settle(VlfsrSeven___024root* vlSelf);
void VlfsrSeven___024root___eval(VlfsrSeven___024root* vlSelf);
#ifdef VL_DEBUG
void VlfsrSeven___024root___eval_debug_assertions(VlfsrSeven___024root* vlSelf);
#endif  // VL_DEBUG
void VlfsrSeven___024root___final(VlfsrSeven___024root* vlSelf);

static void _eval_initial_loop(VlfsrSeven__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VlfsrSeven___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VlfsrSeven___024root___eval_settle(&(vlSymsp->TOP));
        VlfsrSeven___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VlfsrSeven::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VlfsrSeven::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VlfsrSeven___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VlfsrSeven___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VlfsrSeven::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VlfsrSeven::final() {
    VlfsrSeven___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VlfsrSeven::hierName() const { return vlSymsp->name(); }
const char* VlfsrSeven::modelName() const { return "VlfsrSeven"; }
unsigned VlfsrSeven::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VlfsrSeven::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VlfsrSeven___024root__trace_init_top(VlfsrSeven___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VlfsrSeven___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VlfsrSeven___024root*>(voidSelf);
    VlfsrSeven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VlfsrSeven___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VlfsrSeven___024root__trace_register(VlfsrSeven___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VlfsrSeven::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VlfsrSeven::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VlfsrSeven___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
