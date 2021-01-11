#include "verilated.h"
#include <iostream>
#include "Vtest_core.h"
#include <fstream>
#include <algorithm>
#include <verilated_vcd_c.h>
//#include "/home/merl/github_repos/RTL/sky130A/libs.ref/sky130_fd_sc_hd/verilog/sky130_fd_sc_hd.v"
//#include "/home/merl/github_repos/RTL/sky130A/libs.ref/sky130_fd_sc_hd/verilog/primitives.v"
//#include "/home/merl/github_repos/azadi/tests/adder_tests/adder_reg.v"
#define NUM_CYCLES ((vluint64_t)5*800000)

using namespace std;

Vtest_core *top;
vluint16_t main_time = 0;
double sc_time_stamp () {       // Called by $time in Verilog
    return main_time;           // converts to double, to match
                                // what SystemC does
}
int main(int argc, char **argv, char **env)
{
    top = new Vtest_core();
    Verilated::commandArgs(argc, argv);

    // Tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99); // Trace 99 levels of hierarchy
    tfp->spTrace()->set_time_resolution("50 ns");
    tfp->open("obj_dir/sim.vcd");

     vluint64_t hcycle;
    cout << "Starting simulation" << endl;

    for (hcycle = 0; hcycle < hcycle < (NUM_CYCLES * 2);)
    {
  // toggle clock
    top->clock = top->clock ? 0 : 1;
      if(hcycle < 20)
      {
          top-> reset = 1;
      }
      else
      {
          top-> reset = 0;
      }
    //top-> req_i = 1;
    //top-> addr_i = 4;
    //top-> we_i = 1;
    //top-> wdata_i = 56;
    //top-> be_i = 15;
    
    top->eval();
    // Next half cycle
    hcycle++;

        if (Verilated::gotFinish())
            exit(0);

        if (tfp)
            tfp->dump(hcycle);
        main_time++;
    }
    top->final();
    tfp->close();

    delete top;
    exit(0);
    return 0;
}
