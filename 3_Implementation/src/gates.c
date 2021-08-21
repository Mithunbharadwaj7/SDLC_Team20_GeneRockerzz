#include <stdio.h>
#include "gates.h"

error_t getDataFromFile1 (and_two *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
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
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
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

error_t getDataFromFile3 (or_two *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a2 = atoi(str);
                break;
            case 1:
                _values->_b2 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile4 (or_three *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a3 = atoi(str);
                break;
            case 1:
                _values->_b3 = atoi(str);
                break;
            case 2:
                _values->_c3 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile5 (not_two *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a4 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile6 (nand_two *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a5 = atoi(str);
                break;
            case 1:
                _values->_b5 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile7 (nand_three *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a6 = atoi(str);
                break;
            case 1:
                _values->_b6 = atoi(str);
                break;
            case 2:
                _values->_c6 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile8 (nor_two *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a7 = atoi(str);
                break;
            case 1:
                _values->_b7 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile9 (nor_three *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a8 = atoi(str);
                break;
            case 1:
                _values->_b8 = atoi(str);
                break;
            case 2:
                _values->_c8 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile10 (xor_two *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a9 = atoi(str);
                break;
            case 1:
                _values->_b9 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile11 (xor_three *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a10 = atoi(str);
                break;
            case 1:
                _values->_b10 = atoi(str);
                break;
            case 2:
                _values->_c10 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile12 (xnor_two *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a11 = atoi(str);
                break;
            case 1:
                _values->_b11 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getDataFromFile13 (xnor_three *_values){
    FILE *fp = NULL;
    fp = fopen ("gates.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL_1;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_a12 = atoi(str);
                break;
            case 1:
                _values->_b12 = atoi(str);
                break;
            case 2:
                _values->_c12 = atoi(str);
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
        return FAIL_1;
    }
    else if (_values->_res1 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t and_three_input (and_three *_values){
    _values->_res2 = _values->_a1 * _values->_b1 * _values->_c1;
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res2 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t or_two_input (or_two *_values){
    _values->_res3 = _values->_a2 | _values->_b2;
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res3 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t or_three_input (or_three *_values){
    _values->_res4 = _values->_a3 | _values->_b3 | _values->_c3;
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res4 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t not_two_input (not_two *_values){
    if (_values->_a4 == 0){
        _values->_res5 = 1;
    }
    else{
        _values->_res5 = 0;
    }  
    
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res5 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}
error_t nand_two_input (nand_two *_values){
    _values->_res6 = ~(_values->_a5 * _values->_b5);
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res6 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t nand_three_input (nand_three *_values){
    _values->_res7 = ~(_values->_a6 * _values->_b6 * _values->_c6);
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res7 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t nor_two_input (nor_two *_values){
    _values->_res8 = ~(_values->_a7 | _values->_b7);
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res8 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t nor_three_input (nor_three *_values){
    _values->_res9 = ~(_values->_a8 | _values->_b8 | _values->_c8);
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res9 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t xor_two_input (xor_two *_values){
    _values->_res10 = (_values->_a9 * ~(_values->_b9)) + (_values->_b9 * ~(_values->_a9));
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res10 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t xor_three_input (xor_three *_values){
    _values->_res11 = (~(_values->_a10) * ~(_values->_b10) * _values->_c10) + (~(_values->_a10) * _values->_b10 * ~(_values->_c10)) + (_values->_a10 * ~(_values->_b10) * ~(_values->_c10)) + (_values->_a10 * _values->_b10 * _values->_c10);
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res11 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t xnor_two_input (xnor_two *_values){
    _values->_res12 = ~((_values->_a11 * ~(_values->_b11)) + (_values->_b11 * ~(_values->_a11)));
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res12 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}

error_t xnor_three_input (xnor_three *_values){
    _values->_res13 = ~((~(_values->_a12) * ~(_values->_b12) * _values->_c12) + (~(_values->_a12) * _values->_b12 * ~(_values->_c12)) + (_values->_a12 * ~(_values->_b12) * ~(_values->_c12)) + (_values->_a12 * _values->_b12 * _values->_c12));
    if (_values == NULL){
        return FAIL_1;
    }
    else if (_values->_res13 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS_1;
    }
    return 0;
}
