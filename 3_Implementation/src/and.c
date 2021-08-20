#include <stdio.h>
#include "and.h"

error_t getDataFromFile1 (and_two *_values){
    FILE *fp = NULL;
    fp = fopen ("and.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL;
    }
    else
    {
    for (int i=0; i<2; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a = atoi(str);
                break;
            case 1:
                _values->_b = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile2 (and_three *_values){
    FILE *fp = NULL;
    fp = fopen ("and.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a1 = atoi(str);
                break;
            case 1:
                _values->_b1 = atoi(str);
                break;
            case 2:
                _values->_c1 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t and_two_input (and_two *_values){
    _values->_res1 = _values->_a * _values->_b;
    if (_values == NULL){
        return FAIL;
    }
    else if (_values->_res1 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS;
    }
    return 0;
}

error_t and_three_input (and_three *_values){
    _values->_res2 = _values->_a1 * _values->_b1 * _values->_c1;
    if (_values == NULL){
        return FAIL;
    }
    else if (_values->_res2 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS;
    }
    return 0;
}