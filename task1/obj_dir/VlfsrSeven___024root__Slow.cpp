// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VlfsrSeven.h for the primary calling header

#include "verilated.h"

#include "VlfsrSeven__Syms.h"
#include "VlfsrSeven___024root.h"

void VlfsrSeven___024root___ctor_var_reset(VlfsrSeven___024root* vlSelf);

VlfsrSeven___024root::VlfsrSeven___024root(VlfsrSeven__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VlfsrSeven___024root___ctor_var_reset(this);
}

void VlfsrSeven___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VlfsrSeven___024root::~VlfsrSeven___024root() {
}
