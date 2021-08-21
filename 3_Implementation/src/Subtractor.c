#include "Subtractor.h"
#include<stdio.h>

error_sub getData_2 (half_subtractor *values){
    FILE *fp = NULL;
    fp = fopen ("Subtractor.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL_sub;
    }
    else
    {
    for (int i=0; i<2; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                values->a = atoi(str);
                break;
            case 1:
                values->b = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_sub getData_3 (full_subtractor *values){
    FILE *fp = NULL;
    fp = fopen ("Subtractor.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL_sub;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                values->a1 = atoi(str);
                break;
            case 1:
                values->b1 = atoi(str);
                break;
            case 2:
                values->c1 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

void half_Subtractor (half_subtractor *values){
    values->Difference = values->a ^ values->b;
    values->Borrow = (!(values->a)) & values->b;
    printf("Difference is %d and Borrow is %d",values->Difference,values->Borrow);
}

void full_Subtractor (full_subtractor *values){
    values->Difference_1 = (values->a1 ^ values->b1) ^ values->c1;
    values->Borrow_1 = (values->c1 & (!(values->a1 ^ values->b1))) | ((!(values->a1)) & values->b1);
    printf("Difference is %d and Borrow is %d",values->Difference_1,values->Borrow_1);
}
