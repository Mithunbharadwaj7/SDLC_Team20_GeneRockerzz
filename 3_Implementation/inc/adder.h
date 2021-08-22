/**
 * @file adder.h
 * @author Arpita 
 * @brief Adders adds two binary numbers. Half and full adders are designed
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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
    PASS = 0,
    FAIL = -1,
}error_ht;

error_ht getDataFromHalfAdderFile (hf_adder *param);
error_ht getDataFromFullAdderFile (fl_adder *param);
error_ht halfadder (hf_adder *param);
error_ht fulladder (fl_adder *param); 

#endif