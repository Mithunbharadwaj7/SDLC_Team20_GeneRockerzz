/**
 * @file jk.h
 * @author Raviteja and Mithun
 * @brief Latches are the basic elements for storing information.
 * JK, T latches are designed
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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
