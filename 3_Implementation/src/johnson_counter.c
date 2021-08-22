#include "counter.h"

error_sct getDataFromJohnsonCounter(johnson_count *values){
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

error_sct johnson_counter(johnson_count *values){
    /*int *ptr=NULL;
    int n1=values->n;
    int ptr=(int*)malloc(n1*sizeof(int));
    */
    int n1=values->n;
    int ptr[n1];
    for(int i=0;i<n1;i++)
    {
        ptr[i]=0;
    }
   
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            printf("%d ",ptr[j]);
        }
        printf("\n");
        ptr[i]=1;
    }
    for(int j=0;j<n1;j++)
    {
        printf("%d ",ptr[j]);
    }
    printf("\n");
    for(int i=0;i<n1-1;i++)
    {
        ptr[i]=0;
        for(int i=0;i<n1;i++)
        {
            printf("%d ",ptr[i]);
        }
        printf("\n");
    }
    //free(ptr);
    if (values == NULL){
        return FAIL_CT;
    }
    else{
        return PASS_CT;
    }
    return 0;
}
