#include <stdio.h>
#include "demux.h"

error_t getDataFromFile1 (demux_1x8 *_values){
    FILE *fp = NULL;
    fp = fopen ("demux.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL;
    }
    else
    {
    for (int i=0; i<6; i++){
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
                _values->_s2 = atoi(str);
                break;
            case 3:
                _values->_s3 = atoi(str);
                break;
            case 4:
                _values->_din = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}
error_t DEMUX_1x8 (demux_1x8 *_values){
    if(_values->_en){
        _values->_res1 = ~(_values->_s1) * ~(_values->_s2) * ~(_values->_s3) * _values->_din;
        _values->_res2 = (_values->_s1) * ~(_values->_s2) * ~(_values->_s3) * _values->_din;
        _values->_res3 = ~(_values->_s1) * (_values->_s2) * ~(_values->_s3) * _values->_din;
        _values->_res4 = (_values->_s1) * (_values->_s2) * ~(_values->_s3) * _values->_din;
        _values->_res5 = ~(_values->_s1) * ~(_values->_s2) * (_values->_s3) * _values->_din;
        _values->_res6 = (_values->_s1) * ~(_values->_s2) * (_values->_s3) * _values->_din;
        _values->_res7 = ~(_values->_s1) * (_values->_s2) * (_values->_s3) * _values->_din;
        _values->_res8 = (_values->_s1) * (_values->_s2) * (_values->_s3) * _values->_din;
    }
    if(~(_values->_en)){
        _values->_res1 = _values->_res2 = _values->_res3 = _values->_res4 = _values->_res5 = _values->_res6 = _values->_res7 = _values->_res8 = 0;
    }
    
    if (_values == NULL){
        return FAIL;
    }
    else if (_values->_res1 < 0 || _values->_res2 < 0 || _values->_res3 < 0 || _values->_res4 < 0 || _values->_res5 < 0 || _values->_res6 < 0 || _values->_res7 < 0 || _values->_res8 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS;
    }
    return 0;
}