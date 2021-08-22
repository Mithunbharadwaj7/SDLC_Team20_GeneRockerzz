/**
 * @file flipflop.h
 * @author Deepika and Achutha
 * @brief A flip-flop is a device which stores a single bit of data. SR, D, JK and T flip flops are designed.
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FLIPFLOP_H__
#define __FLIPFLOP_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct SR_ff{
    int clk;
    int S;
    int R;
}SR_ff;

typedef struct D_ff{
    int clk;
    int D;
}D_ff;

typedef struct JK_ff{
    int clk;
    int J;
    int K;
}JK_ff;

typedef struct T_ff{
    int clk;
    int T;
}T_ff;

typedef enum error_ff{
    PASS_FF = 0,
    FAIL_FF = -1,
}error_ff;

error_ff getDataFromSR_ff (SR_ff *flipflop);
error_ff getDataFromD_ff (D_ff *flipflop);
error_ff SR_FF (SR_ff *flipflop);
error_ff D_FF (D_ff *flipflop);
error_ff getDataFromJK_ff (JK_ff *flipflop);
error_ff getDataFromT_ff (T_ff *flipflop);
error_ff JK_FF (JK_ff *flipflop);
error_ff T_FF (T_ff *flipflop);

#endif
