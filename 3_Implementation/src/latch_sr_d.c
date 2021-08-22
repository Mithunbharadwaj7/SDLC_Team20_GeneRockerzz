#include "latch.h"

error_lat getDataFromSR_lat(SR_lat *latches)
{
    FILE *fp = NULL;
    fp = fopen ("latch.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_LAT;
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
                    latches->S = atoi(str);
                    break;
                case 2:
                    latches->R = atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_lat getDataFromD_lat(D_lat *latches)
{
    FILE *fp = NULL;
    fp = fopen ("latch.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_LAT;
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
                    latches->D = atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_lat SR_latch(SR_lat *latches)
{
    if(latches->en == 1){
        if(latches->S == 0 && latches->R == 0) {
            printf("No change\n");
        }
        else if(latches->S == 0 && latches->R == 1){
            printf("Reset State\n");
        }
        else if(latches->S == 1 && latches->R == 0){
            printf("Set State\n");
        }
        else{
            printf("Invalid State\n");
        }
    } else {
        printf("No Change\n");
    }
    if (latches == NULL)
    {
        return FAIL_LAT;
    }
    else
    {
        return PASS_LAT;
    }
  return 0;
}

error_lat D_latch(D_lat *latches)
{
    if(latches->en == 1) {
        if(latches->D == 0){
            printf("Reset state\n");
        } else {
            printf("Set State\n");
        }
    } else {
        printf("No change\n");
    }
    if (latches == NULL)
    {
        return FAIL_LAT;
    }
    else
    {
        return PASS_LAT;
    }
  return 0;
}
