#ifndef __LATCH_H__
#define __LATCH_H__

#include <stdio.h>
#include <stdlib.h>
#include "unity.h"
#include "unity_internals.h"
typedef struct SR_lat{
    int en;
    int S;
    int R;
    int Q;
}SR_lat;

typedef struct D_lat{
    int en;
    int D;
    int Q;
}D_lat;

typedef enum error_lat{
    PASS_LAT = 0,
    FAIL_LAT = -1,
}error_lat;

error_lat getDataFromSR_lat(SR_lat *latches);
error_lat getDataFromD_lat(D_lat *latches);
error_lat SR_latch(SR_lat *latches);
error_lat D_latch(D_lat *latches); 

#endif
