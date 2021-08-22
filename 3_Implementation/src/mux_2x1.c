#include <stdio.h>
#include "mux.h"

error_mux getDataFromFile2x1 (mux_2x1 *_values){
    FILE *fp = NULL;
    fp = fopen ("mux.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_mux;
    }
    else
    {
    for (int i=0; i<4; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_en = atoi(str);
                break;
            case 1:
                _values->_s1 = atoi(str);
                break;
            case 2:
                _values->_d0 = atoi(str);
                break;
            case 3:
                _values->_d1 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}
error_mux MUX_2x1 (mux_2x1 *_values){
    if(_values->_en==1){
        if(_values->_s1==0 ) {
            _values->_res_2x1 = _values->_d0;
            printf("%d ",_values->_res_2x1);
        }
        if(_values->_s1==1) {
            _values->_res_2x1 = _values->_d1;
            printf("%d ",_values->_res_2x1);
        }
    }
    if (_values == NULL){
        return FAIL_mux;
    }
    else if (_values->_res_2x1 < 0){
        return ERR_NEGATIVE_mux;
    }
    else{
        return PASS_mux;
    }
    return 0;
}