#ifndef _UP_COUNT_
#define _UP_COUNT_
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
    FAIL_CT = -1,
    ERR_NEGATIVE_CT = -2
}error_sct;

error_sct getDataFromCounter(count *values);
error_sct down_counter (count *values);
error_sct up_counter (count *values);
error_sct up_down_counter (count *values);
error_sct johnson_counter (count *values);
error_sct ring_counter (count *values);
#endif // COUNTER_H_INCLUDED