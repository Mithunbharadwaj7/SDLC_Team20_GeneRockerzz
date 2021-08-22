#include "counter.h"

error_sct getDataFromCounter(count *values){
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

void ring_counter(count *values){
    int *p=NULL;
    int p=(int*)malloc((values->n)*sizeof(int));
    for(int i=0;i<values->n;i++)
    {
        p[i]=0;
    }
    int i,j;
    for(i=0;i<values->n;i++)
    {
        p[i]=0;
    }
    for(i=0;i<values->n;i++)
    {
        p[i]=1;
        for(j=0;j<values->n;j++)
        {
            printf("%d ",p[j]);
        }
        printf("\n");
        p[i]=0;
    }
    return 0;
}
