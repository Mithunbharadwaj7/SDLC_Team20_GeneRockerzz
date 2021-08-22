#include "jk.h"

error_laj getDataFromJK (JK_LA *latches)
{
    FILE *fp = NULL;
    fp = fopen ("latches.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_LAJ;
    }
    else
    {
        for (int i=0; i<3; i++)
        {
            char str[100];
            fgets (str, 60, fp);
            switch (i)
            {
                case 0:
                    latches->en = atoi(str);
                    break;
                case 1:
                    latches->j = atoi(str);
                    break;
                case 2:
                    latches->k= atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_laj getDataFromT (T_LA *latches)
{
    FILE *fp = NULL;
    fp = fopen ("latches.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_LAJ;
    }
    else
    {
        for (int i=0; i<2; i++)
        {
            char str[100];
            fgets (str, 60, fp);
            switch (i)
            {
                case 0:
                    latches->en = atoi(str);
                    break;
                case 1:
                    latches->t = atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_laj JK(JK_LA *latches)
{
    if(latches->en == 1)
    {
        if(latches->j == 0 && latches->k == 0) {
            printf("No change\n");
        }
        else if(latches->j == 0 && latches->k == 1)
        {
            printf("%d\n",0);
        }
        else if(latches->j == 1 && latches->k == 0){
            printf("%d\n",0);
        }
        else if(latches->j == 1 && latches->k == 1 ){
            printf("Toggle\n");
        }
    } else {
        printf("No Change\n");
    }
    if (latches == NULL)
    {
        return FAIL_LAJ;
    }
    else
    {
        return PASS_LAJ;
    }
  return 0;
}

error_laj T(T_LA *latches)
{
    if(latches->en == 1) {
        if(latches->t == 0){
            printf("Reset state\n");
        } else {
            printf("Toggle\n");
        }
    } else {
        printf("No change\n");
    }
    if (latches == NULL)
    {
        return FAIL_LAJ;
    }
    else
    {
        return PASS_LAJ;
    }
  return 0;
}