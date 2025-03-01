#include "conversion.h"

error_edt getData_21 (enco_21 *values){
    FILE *fp = NULL;
    fp = fopen ("encoder.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL_EDT;
    }
    else
    {
    for (int i=0; i<2; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                values->X0 = atoi(str);
                break;
            case 1:
                values->X1 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_edt getData_42 (enco_42 *values){
    FILE *fp = NULL;
    fp = fopen ("encoder.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL_EDT;
    }
    else
    {
    for (int i=0; i<4; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                values->X0 = atoi(str);
                break;
            case 1:
                values->X1 = atoi(str);
                break;
            case 2:
                values->X2 = atoi(str);
                break;
            case 3:
                values->X3 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_edt getData_83 (enco_83 *values){
    FILE *fp = NULL;
    fp = fopen ("encoder.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL_EDT;
    }
    else
    {
    for (int i=0; i<8; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                values->X0 = atoi(str);
                break;
            case 1:
                values->X1= atoi(str);
                break;
            case 2:
                values->X2= atoi(str);
                break;
            case 3:
                values->X3 = atoi(str);
                break;
            case 4:
                values->X4 = atoi(str);
                break;
            case 5:
                values->X5 = atoi(str);
                break;
            case 6:
                values->X6 = atoi(str);
                break;
            case 7:
                values->X7 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_edt encoder_21 (enco_21 *values){
    values->Y0 = (!(values->X0))|(values->X1);
    printf("Y0 = %d",values->Y0);
    if (values == NULL){
        return FAIL_EDT;
    }
    else{
        return PASS_EDT;
    }
}

error_edt encoder_42 (enco_42 *values){
    values->Y0 = (values->X3) | (values->X1) ;
    values->Y1 = (values->X3) | (values->X2) ;
    printf("Y0 = %d Y1 = %d ",values->Y0,values->Y1);
    if (values == NULL){
        return FAIL_EDT;
    }
    else{
        return PASS_EDT;
    }
}

error_edt encoder_83 (enco_83 *values){
    values->Y0 = (values->X1) | (values->X3) | (values->X5) | (values->X7);
    values->Y1 = (values->X2) | (values->X3) | (values->X6) | (values->X7);
    values->Y2 = (values->X4) | (values->X5) | (values->X6) | (values->X7);
    printf("Y0 = %d Y1 = %d Y2 = %d",values->Y0,values->Y1,values->Y2);
    if (values == NULL){
        return FAIL_EDT;
    }
    else{
        return PASS_EDT;
    }
}
