#ifndef JK_H_INCLUDED
#define JK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct JK_LA{
    int en;
    int j;
    int k;
}JK_LA;

typedef struct T_LA{
    int en;
    int t;
}T_LA;

typedef enum error_laj{
    PASS_LAJ = 0,
    FAIL_LAJ = -1
}error_laj;

error_laj getDataFromJK (JK_LA *latches);
error_laj getDataFromT (T_LA *latches);
error_laj JK (JK_LA *latches);
error_laj T (T_LA *latches); 

#endif
