#include <stdio.h>
#include "demux.h"

error_demux getDataFromFile1x8 (demux_1x8 *_values){
    FILE *fp = NULL;
    fp = fopen ("demux.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_demux;
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
error_demux DEMUX_1x8 (demux_1x8 *_values){
    if(_values->_en){
        _values->_res1 = ~(_values->_s1) * ~(_values->_s2) * ~(_values->_s3) * _values->_din;
        _values->_res2 = (_values->_s1) * ~(_values->_s2) * ~(_values->_s3) * _values->_din;
        _values->_res3 = ~(_values->_s1) * (_values->_s2) * ~(_values->_s3) * _values->_din;
        _values->_res4 = (_values->_s1) * (_values->_s2) * ~(_values->_s3) * _values->_din;
        _values->_res5 = ~(_values->_s1) * ~(_values->_s2) * (_values->_s3) * _values->_din;
        _values->_res6 = (_values->_s1) * ~(_values->_s2) * (_values->_s3) * _values->_din;
        _values->_res7 = ~(_values->_s1) * (_values->_s2) * (_values->_s3) * _values->_din;
        _values->_res8 = (_values->_s1) * (_values->_s2) * (_values->_s3) * _values->_din;
        printf("%d %d %d %d %d %d %d %d",_values->_res1,_values->_res2,_values->_res3,_values->_res4,_values->_res5,_values->_res6,_values->_res7,_values->_res8);
    }
    if(~(_values->_en)){
        _values->_res1 = _values->_res2 = _values->_res3 = _values->_res4 = _values->_res5 = _values->_res6 = _values->_res7 = _values->_res8 = 0;
        printf("%d ",_values->_res1);
    }
    
    if (_values == NULL){
        return FAIL_demux;
    }
    else if (_values->_res1 < 0 || _values->_res2 < 0 || _values->_res3 < 0 || _values->_res4 < 0 || _values->_res5 < 0 || _values->_res6 < 0 || _values->_res7 < 0 || _values->_res8 < 0){
        return ERR_NEGATIVE_demux;
    }
    else{
        return PASS_demux;
    }
    return 0;
}