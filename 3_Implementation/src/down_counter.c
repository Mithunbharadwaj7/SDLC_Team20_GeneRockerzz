#include "counter.h"

error_sct getDataFromDownCounter(down_count *values){
    FILE *fp = NULL;
    fp = fopen ("counter.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL_CT;
    }
    else
    {
    for (int i=0; i<1; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                values->n = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_sct down_counter (down_count *values){
    for(int i=values->n;i>0;i--)
    {
        printf("%ld\n",DTB(i));
    }
    if (values == NULL){
        return FAIL_CT;
    }
    else{
        return PASS_CT;
    }
}
