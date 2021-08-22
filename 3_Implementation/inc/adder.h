#ifndef __ADDER_H__
#define __ADDER_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct halfadder{
    int A;
    int B;
    int sum;
    int carry;
}hf_adder;

typedef struct fulladder{
    int A;
    int B;
    int C;
    int sum;
    int carry;
}fl_adder;

typedef enum error_ht{
    PASS1 = 0,
    FAIL1 = -1,
}error_ht;

error_ht getDataFromHalfAdderFile (hf_adder *param);
error_ht getDataFromFullAdderFile (fl_adder *param);
error_ht halfadder (hf_adder *param);
error_ht fulladder (fl_adder *param); 

#endif