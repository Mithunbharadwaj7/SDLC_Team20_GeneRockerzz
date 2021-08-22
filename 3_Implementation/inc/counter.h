#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef struct up_count{
    int n;
}up_count;

typedef struct down_count{
    int n;
}down_count;

typedef struct up_down_count{
    int n;
}up_down_count;

typedef struct johnson_count{
    int n;
}johnson_count;

typedef struct ring_count{
    int n;
}ring_count;


typedef enum error_sct{
    PASS_CT = 0,
    FAIL_CT = -1
}error_sct;

long DTB(int dnum);
error_sct getDataFromUpCounter(up_count *values);
error_sct getDataFromDownCounter(down_count *values);
error_sct getDataFromUpDownCounter(up_down_count *values);
error_sct getDataFromJohnsonCounter(johnson_count *values);
error_sct getDataFromRingCounter(ring_count *values);
error_sct down_counter (down_count *values);
error_sct up_counter (up_count *values);
error_sct up_down_counter (up_down_count *values);
error_sct johnson_counter (johnson_count *values);
error_sct ring_counter (ring_count *values);
#endif // COUNTER_H_INCLUDED
