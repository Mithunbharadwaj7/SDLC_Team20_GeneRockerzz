#include <stdio.h>
#include "mux.h"

error_t getDataFromFile1 (mux_2x1 *_values){
    FILE *fp = NULL;
    fp = fopen ("mux.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL;
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
error_t MUX_2x1 (mux_2x1 *_values){
    if(_values->_en==1){
        if(_values->_s1==0 ) {
            _values->_res_2x1 = _values->_d0;
        }
        if(_values->_s1==1) {
            _values->_res_2x1 = _values->_d1;
        }
    }
    if (_values == NULL){
        return FAIL;
    }
    else if (_values->_res_2x1 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS;
    }
    return 0;
}