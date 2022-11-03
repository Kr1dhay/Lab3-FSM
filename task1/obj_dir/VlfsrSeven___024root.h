// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VlfsrSeven.h for the primary calling header

#ifndef VERILATED_VLFSRSEVEN___024ROOT_H_
#define VERILATED_VLFSRSEVEN___024ROOT_H_  // guard

#include "verilated.h"

class VlfsrSeven__Syms;

class VlfsrSeven___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,6,0);
    CData/*6:0*/ lfsrSeven__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VlfsrSeven__Syms* const vlSymsp;

    // CONSTRUCTORS
    VlfsrSeven___024root(VlfsrSeven__Syms* symsp, const char* name);
    ~VlfsrSeven___024root();
    VL_UNCOPYABLE(VlfsrSeven___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
