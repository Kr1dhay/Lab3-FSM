#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlfsr.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 10000
#define ADDRESS_WIDTH 8
#define ROM_SZ 256


int main(int argc, char **argv, char **env){
    int clockCount;
    int tick;

    Verilated::commandArgs(argc, argv);   // init top verilog instance
    Vlfsr* top = new Vlfsr;         // init trace dump

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("lfsr.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("L3T1: LFSR");

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    vbdSetMode(1);

    for (clockCount=0; clockCount<MAX_SIM_CYC; clockCount++) {
    // dump variables into VCD file and toggle clock
      for (tick=0; tick<2; tick++) {
        tfp->dump (2*clockCount+tick);
        top->clk = !top->clk;
        top->eval ();
      }

      if (clockCount > 2){
        top->rst = 0;
      }

      //top->en = vbdFlag();

      vbdHex(1, top->data_out & 0xF);

      vbdCycle(clockCount);

      if ((Verilated::gotFinish()) || (vbdGetkey()=='q')){
          exit(0);
      }    
    }

    vbdClose();
    tfp->close();
    exit(0);

}
