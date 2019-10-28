/**
 * Source: state machine in SystemC.
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

// States
enum state {
    wait_st, 
    refund_st, 
    select_st, 
    change_st,
    sellB_st, 
    sellL_st
};

SC_MODULE (statemachine) {
    // INPUT
    sc_in_clk   clock; // Clock input of the design
    sc_in<char> key; // Input key by user

    // OUTPUT
    sc_out<sc_uint <2>> change; //2 bit vector output of change; // 0>CRC0 / 1>CRC500 / 2>CRC1000
    sc_out<sc_uint <2>> product; // 2 bit vector output of produt; // 0>NO / 1>Black / 2>Latte

    //−−−−−−−−−−−−Local Variables Here−−−−−−−−−−−−−−−−−−−−−

    sc_signal<state> next_state;
    sc_signal<state> current_state;

    sc_uint<2> mProduct;
    sc_uint<2> mChange;

    //−−−−−−−−−−−−Code Starts Here−−−−−−−−−−−−−−−−−−−−−−−−−

    // Below function get the next state according to the input key value and previous state
    void get_next_state () {
        mChange = 0;
        mProduct = 0;
        change.write(mChange);
        product.write(mProduct);

        switch (current_state) {
            case wait_st:
                // Option get coffee
                if (key.read() == '1') {
                    next_state = select_st;
                // No option selected
                } else {
                    next_state = wait_st;
                }
                break;
            
            case refund_st:
                mChange = 2;
                change.write(mChange);
                next_state = wait_st;
                break;

            case select_st:
                // Option Cancel
                if (key.read() == '0') {
                    next_state = refund_st;
                // Option Latte
                } else if (key.read() == '2') {
                    next_state = sellL_st;
                // Option Black
                } else if (key.read() == '3') {
                    next_state = change_st;
                // No option selected
                } else {
                    next_state = select_st;
                }
                break;
            
            case change_st:
                mChange = 1;
                change.write(mChange);
                next_state = sellB_st;
                break;

            case sellB_st:
                mProduct = 1;
                product.write(mProduct);
                next_state = wait_st;
                break;

            case sellL_st:
                mProduct = 2;
                product.write(mProduct);
                next_state = wait_st;
                break;
        }
    } // End of function get_next_st

    // Below function set the next state
    void set_state () {
        current_state = next_state;
    }

    // Constructor for the state machine
    // Since this counter is a positive edge trigged one,
    // We trigger the below block with respect to positive
    // edge of the clock and also when ever reset changes state
    SC_CTOR (statemachine) {
        SC_METHOD (get_next_state);
            sensitive << key << current_state;
        SC_METHOD (set_state);
            sensitive << clock.pos();
    } // End of Constructor
}; // End of Module statemachine