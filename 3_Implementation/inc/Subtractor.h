#ifndef SUBTRACTOR_H_INCLUDED
#define SUBTRACTOR_H_INCLUDED

#include <stdlib.h>
#include <math.h>

typedef struct half_subtractor{
    int a;
    int b;
    int Difference;
    int Borrow;
}half_subtractor;

typedef struct full_subtractor{
    int a1;
    int b1;
    int c1;
    int Difference_1;
    int Borrow_1;
}full_subtractor;

typedef enum error_sub{
    PASS_sub = 0,
    FAIL_sub = -1,
    ERR_NEGATIVE_sub = -2
}error_sub;

error_sub getData_2 (half_subtractor *values);
error_sub getData_3 (full_subtractor *values);
void half_Subtractor(half_subtractor *values);
void full_Subtractor(full_subtractor *values);

#endif // SUBTRACTOR_H_INCLUDED
