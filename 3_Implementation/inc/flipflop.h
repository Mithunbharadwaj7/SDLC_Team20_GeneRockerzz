#ifndef __FLIPFLOP_H__
#define __FLIPFLOP_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct SR_ff{
    int clk;
    int S;
    int R;
    int Q;
    int res_SR_ff;
}SR_ff;

typedef struct D_ff{
    int clk;
    int D;
    int res_D_ff;
}D_ff;

typedef enum error_ff{
    PASS_FF = 0,
    FAIL_FF = -1,
}error_ff;

error_ff getDataFromSR_ff (SR_ff *flipflop);
error_ff getDataFromD_ff (D_ff *flipflop);
error_ff SR_FF (SR_ff *flipflop);
error_ff D_FF (D_ff *flipflop); 

#endif