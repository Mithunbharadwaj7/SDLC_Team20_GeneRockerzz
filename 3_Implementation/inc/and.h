#ifndef _GATES_
#define _GATES_
#include <stdlib.h>
#include <math.h>

typedef struct and_two{
    int _a;
    int _b;
    int _res1;
}and_two;

typedef struct and_three{
    int _a1;
    int _b1;
    int _c1;
    int _res2;
}and_three;

typedef enum error_t{
    PASS = 0,
    FAIL = -1,
    ERR_NEGATIVE = -2
}error_t;

error_t getDataFromFile1 (and_two *_values);
error_t getDataFromFile2 (and_three *_values);
error_t and_two_input (and_two *_value);
error_t and_three_input (and_three *_value); 

#endif