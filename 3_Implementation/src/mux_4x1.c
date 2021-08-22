#include <stdio.h>
#include "mux.h"

error_mux getDataFromFile4x1 (mux_4x1 *_values)
{
    
    FILE *fp = NULL;
    fp = fopen ("mux.txt" , "r");
        
        if (fp == NULL)
            {
                printf("File not found!"); 
                return FAIL_mux;
            }

        else
            {
                for (int i=0; i<7; i++)
                    {
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
                                    _values->_d0 = atoi(str);
                                    break;
                                case 4:
                                    _values->_d1 = atoi(str);
                                    break;
                                case 5:
                                    _values->_d2 = atoi(str);
                                    break;
                                case 6:
                                    _values->_d3 = atoi(str);
                                    break;
                            }
                    }
            fclose(fp);
            
            }

    

    return 0;
}

error_mux MUX_4x1 (mux_4x1 *_values)
{
    if(_values->_en==1)
        {
            if(_values->_s1==0 & _values->_s2==0)
                {
                    _values->_res_4x1 = _values->_d0;
                    printf("%d ",_values->_res_4x1);
                }
            if(_values->_s1==0 & _values->_s2==1) 
                {
                    _values->_res_4x1 = _values->_d1;
                    printf("%d ",_values->_res_4x1);
                }
            if(_values->_s1==1 & _values->_s2==0) 
                {
                    _values->_res_4x1 = _values->_d2;
                    printf("%d ",_values->_res_4x1);
                }
            if(_values->_s1==1 & _values->_s2==1) 
                {
                    _values->_res_4x1 = _values->_d3;
                    printf("%d ",_values->_res_4x1);
                }
        }

    else if (~(_values->_en))
        {
            _values->_res_4x1 = 0;
            printf("%d ",_values->_res_4x1);
        }

    if (_values == NULL)
        {
            return FAIL_mux;
        }

    else if (_values->_res_4x1 < 0)
        {
            return ERR_NEGATIVE_mux;
        }
    else
        {
            return PASS_mux;
        }

    return 0;
}
