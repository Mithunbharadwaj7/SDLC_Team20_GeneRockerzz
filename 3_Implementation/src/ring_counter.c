#include "counter.h"

error_sct getDataFromRingCounter(ring_count *values){
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

error_sct ring_counter(ring_count *values){
    //int *p=NULL;
    int n2=values->n;
    //int p=(int*)malloc(n2*sizeof(int));
    int p[n2];
    for(int i=0;i<n2;i++)
    {
        p[i]=0;
    }
    int i,j;
    for(i=0;i<n2;i++)
    {
        p[i]=0;
    }
    for(i=0;i<n2;i++)
    {
        p[i]=1;
        for(j=0;j<n2;j++)
        {
            printf("%d ",p[j]);
        }
        printf("\n");
        p[i]=0;
    }
    //free(p);
    if (values == NULL){
        return FAIL_CT;
    }
    else{
        return PASS_CT;
    }
    return 0;
}
