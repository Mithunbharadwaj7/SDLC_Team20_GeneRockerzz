#include "flipflop.h"

error_ff getDataFromSR_ff (SR_ff *flipflop)
{
    FILE *fp = NULL;
    fp = fopen ("flipflop.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_FF;
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
                    flipflop->clk = atoi(str);
                    break;
                case 1:
                    flipflop->S = atoi(str);
                    break;
                case 2:
                    flipflop->R = atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_ff getDataFromD_ff (D_ff *flipflop)
{
    FILE *fp = NULL;
    fp = fopen ("flipflop.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_FF;
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
                    flipflop->clk = atoi(str);
                    break;
                case 1:
                    flipflop->D = atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_ff SR_FF(SR_ff *flipflop)
{
    if(flipflop->clk == 1){
        if(flipflop->S == 0 & flipflop->R == 0) {
            printf("No change\n");
        }
        else if(flipflop->S == 0 & flipflop->R == 1){
            printf("Reset State\n");
        }
        else if(flipflop->S == 1 & flipflop->R == 0){
            printf("Set State\n");
        }
        else{
            printf("Invalid State\n");
        }
    } else {
        printf("No Change\n");
    }
    if (flipflop == NULL)
    {
        return FAIL_FF;
    }
    else
    {
        return PASS_FF;
    }
  return 0;
}

error_ff D_FF(D_ff *flipflop)
{
    if(flipflop->clk == 1) {
        if(flipflop->D == 0){
            printf("Reset state\n");
        } else {
            printf("Set State\n");
        }
    } else {
        printf("No change\n");
    }
    if (flipflop == NULL)
    {
        return FAIL_FF;
    }
    else
    {
        return PASS_FF;
    }
  return 0;
}

error_ff getDataFromJK_ff (JK_ff *flipflop)
{
    FILE *fp = NULL;
    fp = fopen ("Subtractor.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL_FF;
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
                    flipflop->clk = atoi(str);
                    break;
                case 1:
                    flipflop->J = atoi(str);
                    break;
                case 2:
                    flipflop->K = atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_ff getDataFromT_ff (T_ff *flipflop)
{
    FILE *fp = NULL;
    fp = fopen ("Subtractor.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL_FF;
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
                    flipflop->clk = atoi(str);
                    break;
                case 1:
                    flipflop->T = atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_ff JK_FF(JK_ff *flipflop)
{
    if(flipflop->clk == 1){
        if(flipflop->J == 0 & flipflop->K == 0) {
            printf("Initial State\n");
        }
        else if(flipflop->J == 0 & flipflop->K == 1){
            printf("Reset State\n");
        }
        else if(flipflop->J == 1 & flipflop->K == 0){
            printf("Set State\n");
        }
        else{
            printf("Invalid State/Toggle State\n");
        }
    } else {
        printf("No Change\n");
    }
    if (flipflop == NULL)
    {
        return FAIL_FF;
    }
    else
    {
        return PASS_FF;
    }
  return 0;
}

error_ff T_FF(T_ff *flipflop)
{
    if(flipflop->clk == 1) {
        if(flipflop->T == 0){
            printf("In Memory\n");
        } else {
            printf("Toggle\n");
        }
    } else {
        printf("No change\n");
    }
    if (flipflop == NULL)
    {
        return FAIL_FF;
    }
    else
    {
        return PASS_FF;
    }
  return 0;
}
