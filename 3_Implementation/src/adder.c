 #include "adder.h"

error_ht getDataFromHalfAdderFile (hf_adder *param)
{
    FILE *fp = NULL;
    fp = fopen ("adder.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL;
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
                    param->A = atoi(str);
                    break;
                case 1:
                    param->B = atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_ht getDataFromFullAdderFile (fl_adder *param)
{
    FILE *fp = NULL;
    fp = fopen ("adder.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL;
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
                    param->A = atoi(str);
                    break;
                case 1:
                    param->B = atoi(str);
                    break;
                case 2:
                    param->C = atoi(str);
                    break;
            }
        }
        fclose(fp);
    }
    return 0;
}

error_ht halfadder(hf_adder *param)
{
    param->sum = param->A ^ param->B;
    param->carry = param->A & param->B;
    printf("The result of HALF ADDER with two inputs is sum = %d  carry = %d ",param->sum,param->carry);

    if (param == NULL)
    {
        return FAIL;
    }
    else
    {
        return PASS;
    }
  return 0;
}

error_ht fulladder(fl_adder *param)
{
    param->sum = param->A ^ param->B ^ param->C;
    param->carry = (param->A & param->B)|(param->B & param->C)|(param->C & param->A);
    printf("The result of FULL ADDER with three inputs is sum = %d  carry = %d ",param->sum,param->carry);

    if (param == NULL)
    {
        return FAIL;
    }
    else
    {
        return PASS;
    }
  return 0;
}
