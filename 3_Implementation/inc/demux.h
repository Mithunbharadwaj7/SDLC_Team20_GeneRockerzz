#ifndef _DEMUX_
#define _DEMUX_
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct demux_1x8{
    int _en;
    int _s1;
    int _s2;
    int _s3;
    int _din;
    int _res1;
    int _res2;
    int _res3;
    int _res4;
    int _res5;
    int _res6;
    int _res7;
    int _res8;
}demux_1x8;

typedef enum error_t{
    PASS = 0,
    FAIL = -1,
    ERR_NEGATIVE = -2
}error_t;

error_t getDataFromFile1 (demux_1x8 *_values);
error_t DEMUX_2x1 (demux_1x8 *_value);

#endif