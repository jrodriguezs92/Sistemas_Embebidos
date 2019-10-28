/**
 * Testbench for state machine in SystemC.
 * Source file
 * 
 * Instituto Tecnológico de Costa Rica
 * Computer Engineering
 * CE5303: Embedded Systems Introduction
 * 
 * Author: Jeremy Rodriguez Solorzano
 * Date: 26/10/2019
 */

#include "systemc.h"
#include "statemachine.cpp"

int sc_main(int argc, char* argv []) {
    sc_signal<bool> clock;
    sc_signal<char> key;
    sc_signal<sc_uint<2>> change;
    sc_signal<sc_uint<2>> product;

    // Connect the DUT
    statemachine sm("COFFEE");
    sm.clock(clock);
    sm.key(key);
    sm.change(change);
    sm.product(product);

    sc_start(1, SC_NS);

    // Open VCD file
    sc_trace_file *wf = sc_create_vcd_trace_file("coffeeM");

    // Dump the desired signals
    sc_trace(wf, clock, "clock");
    sc_trace(wf, key, "key");
    sc_trace(wf, change, "change");
    sc_trace(wf, product, "product");
        
    // Start simulation
    clock = 0;
    sc_start(1, SC_NS);
    clock = 1;
    sc_start(1, SC_NS);

    key = '1';
    cout << "@" << sc_time_stamp() << " Start\n" << endl;

    clock = 0;
    sc_start(1, SC_NS);
    clock = 1;
    sc_start(1, SC_NS);

    key = '3';
    cout << "@" << sc_time_stamp() << " Selecting Black coffee\n" << endl;

    clock = 0;
    sc_start(1, SC_NS);
    clock = 1;
    sc_start(1, SC_NS);
    clock = 0;
    sc_start(1, SC_NS);
    clock = 1;
    sc_start(1, SC_NS);
    clock = 0;
    sc_start(1, SC_NS);
    clock = 1;
    sc_start(1, SC_NS);

    key = '1';
    cout << "@" << sc_time_stamp() << " Starting again\n" << endl;

    clock = 0;
    sc_start(1, SC_NS);
    clock = 1;
    sc_start(1, SC_NS);

    key = '2';
    cout << "@" << sc_time_stamp() << " Selecting Latte coffee\n" << endl;

    clock = 0;
    sc_start(1, SC_NS);
    clock = 1;
    sc_start(1, SC_NS);
    clock = 0;
    sc_start(1, SC_NS);
    clock = 1;
    sc_start(1, SC_NS);
    clock = 0;
    sc_start(1, SC_NS);
    clock = 1;
    sc_start(1, SC_NS);

    // Finish simulation
    cout << "@" << sc_time_stamp() << " Terminating simulation\n" << endl;
    sc_close_vcd_trace_file(wf);

    return 0; // Terminate simulation
}