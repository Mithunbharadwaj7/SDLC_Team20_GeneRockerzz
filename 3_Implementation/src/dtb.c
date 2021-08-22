#include "conversion.h"

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