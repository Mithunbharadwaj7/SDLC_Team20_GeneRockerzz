#ifndef _GATES_
#define _GATES_
#include <stdlib.h>
#include <math.h>

typedef struct and_two{
    int _a;
    int _b;
    int _res1;
}and_two;

typedef struct and_three{
    int _a1;
    int _b1;
    int _c1;
    int _res2;
}and_three;

typedef struct or_two{
    int _a2;
    int _b2;
    int _res3;
}or_two;

typedef struct or_three{
    int _a3;
    int _b3;
    int _c3;
    int _res4;
}or_three;

typedef struct not_two{
    int _a4;
    int _res5;
}not_two;

typedef struct nand_two{
    int _a5;
    int _b5;
    int _res6;
}nand_two;

typedef struct nand_three{
    int _a6;
    int _b6;
    int _c6;
    int _res7;
}nand_three;

typedef struct nor_two{
    int _a7;
    int _b7;
    int _res8;
}nor_two;

typedef struct nor_three{
    int _a8;
    int _b8;
    int _c8;
    int _res9;
}nor_three;

typedef struct xor_two{
    int _a9;
    int _b9;
    int _res10;
}xor_two;

typedef struct xor_three{
    int _a10;
    int _b10;
    int _c10;
    int _res11;
}xor_three;

typedef struct xnor_two{
    int _a11;
    int _b11;
    int _res12;
}xnor_two;

typedef struct xnor_three{
    int _a12;
    int _b12;
    int _c12;
    int _res13;
}xnor_three;

typedef enum error_t{
    PASS_1 = 0,
    FAIL_1 = -1,
    ERR_NEGATIVE = -2
}error_t;

error_t getDataFromFile1 (and_two *_values);
error_t getDataFromFile2 (and_three *_values);
error_t getDataFromFile3 (or_two *_values);
error_t getDataFromFile4 (or_three *_values);
error_t getDataFromFile5 (not_two *_values);
error_t getDataFromFile6 (nand_two *_values);
error_t getDataFromFile7 (nand_three *_values);
error_t getDataFromFile8 (nor_two *_values);
error_t getDataFromFile9 (nor_three *_values);
error_t getDataFromFile10 (xor_two *_values);
error_t getDataFromFile11 (xor_three *_values);
error_t getDataFromFile12 (xnor_two *_values);
error_t getDataFromFile13 (xnor_three *_values);

error_t and_two_input (and_two *_values);
error_t not_two_input (not_two *_values);
error_t or_two_input (or_two *_values);
error_t nand_two_input (nand_two *_values);
error_t nor_two_input (nor_two *_values);
error_t xor_two_input (xor_two *_values);
error_t xnor_two_input (xnor_two *_values);
error_t and_three_input (and_three *_values); 
error_t or_three_input (or_three *_values); 
error_t nand_three_input (nand_three *_values); 
error_t nor_three_input (nor_three *_values); 
error_t xor_three_input (xor_three *_values); 
error_t xnor_three_input (xnor_three *_values); 

#endif