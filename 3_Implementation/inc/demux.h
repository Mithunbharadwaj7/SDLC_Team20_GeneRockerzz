#ifndef _DEMUX_
#define _DEMUX_
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct demux_1x2{
    int _en;
    int _s1;
    int _din;
    int _res1;
    int _res2;
}demux_1x2;

typedef struct demux_1x4{
    int _en;
    int _s1;
    int _s2;
    int _din;
    int _res1;
    int _res2;
    int _res3;
    int _res4;
}demux_1x4;

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

typedef enum error_demux{
    PASS_demux = 0,
    FAIL_demux = -1,
    ERR_NEGATIVE_demux = -2
}error_demux;

error_demux getDataFromFile1x2 (demux_1x2 *_values);
error_demux getDataFromFile1x4 (demux_1x4 *_values);
error_demux getDataFromFile1x8 (demux_1x8 *_values);
error_demux DEMUX_1x2 (demux_1x2 *_values);
error_demux DEMUX_1x4 (demux_1x4 *_values);
error_demux DEMUX_1x8 (demux_1x8 *_values);

#endif
