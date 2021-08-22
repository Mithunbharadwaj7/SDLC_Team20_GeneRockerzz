#ifndef _MUX_
#define _MUX_
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct mux_2x1{
    int _en;
    int _s1;
    int _d0;
    int _d1;
    int _res_2x1;
}mux_2x1;

typedef struct mux_4x1{
    int _en;
    int _s1;
    int _s2;
    int _d0;
    int _d1;
    int _d2;
    int _d3;
    int _res_4x1;
}mux_4x1;

typedef struct mux_8x1{
    int _en;
    int _s1;
    int _s2;
    int _s3;
    int _d0;
    int _d1;
    int _d2;
    int _d3;
    int _d4;
    int _d5;
    int _d6;
    int _d7;
    int _res_8x1;
}mux_8x1;

typedef enum error_mux{
    PASS_mux = 0,
    FAIL_mux = -1,
    ERR_NEGATIVE_mux = -2
}error_mux;

error_mux getDataFromFile2x1 (mux_2x1 *_values);
error_mux getDataFromFile4x1 (mux_4x1 *_values);
error_mux getDataFromFile8x1 (mux_8x1 *_values);
error_mux MUX_2x1 (mux_2x1 *_values);
error_mux MUX_4X1 (mux_4x1 *_values);
error_mux MUX_8X1 (mux_8x1 *_values);

#endif
