/**
 * @file counter.h
 * @author Ambika, Megha and Shravani 
 * @brief Counters are used in digital electronics for counting purpose. 
 * Down, Up, Up-down, Johnsone nad ring counter are designed
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long DTB(int dnum)
{
    long bnum = 0;
    int rem, temp = 1;

    while (dnum!=0)
    {
        rem = dnum%2;
        dnum = dnum / 2;
        bnum = bnum + rem*temp;
        temp = temp * 10;
    }
    return bnum;
}

typedef struct count{
    int n;
}count;


typedef enum error_sct{
    PASS_CT = 0,
    FAIL_CT = -1
}error_sct;

error_sct getDataFromCounter(count *values);
void down_counter (count *values);
void up_counter (count *values);
void up_down_counter (count *values);
void johnson_counter (count *values);
void ring_counter (count *values);
#endif // COUNTER_H_INCLUDED
