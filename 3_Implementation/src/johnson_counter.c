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

void johnson_counter(count *values){
    int *ptr=NULL;
    int ptr=(int*)malloc((values->n)*sizeof(int));;
    for(int i=0;i<values->n;i++)
    {
        ptr[i]=0;
    }
   
    for(int i=0;i<values->n;i++)
    {
        for(int j=0;j<values->n;j++)
        {
            printf("%d ",ptr[j]);
        }
        printf("\n");
        ptr[i]=1;
    }
    for(int j=0;j<values->n;j++)
    {
        printf("%d ",ptr[j]);
    }
    printf("\n");
    for(int i=0;i<(values->n)-1;i++)
    {
        ptr[i]=0;
        for(int i=0;i<values->n;i++)
        {
            printf("%d ",ptr[i]);
        }
        printf("\n");
    }
    
    return 0;
}
