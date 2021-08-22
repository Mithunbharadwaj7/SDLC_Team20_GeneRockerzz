/**
 * @file conversion.h
 * @author Mithun, Ambika, Sravani
 * @brief The encoder will convert the information from one format to another format. 
 * 2 to 1, 4 to 2 and 8 to 3 encoders are designed
 * 1 to 2, 2 to 4 and 3 to 8 decoders are designed
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef CONVERSION_H_INCLUDED
#define CONVERSION_H_INCLUDED

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

typedef struct enco_21{
    int X0;
    int X1;
    int Y0;
}enco_21;

typedef struct enco_42{
    int X0;
    int X1;
    int X2;
    int X3;
    int Y0;
    int Y1;
}enco_42;

typedef struct enco_83{
    int X0;
    int X1;
    int X2;
    int X3;
    int X4;
    int X5;
    int X6;
    int X7;
    int Y0;
    int Y1;
    int Y2;
}enco_83;

typedef struct deco_12{
    int A;
    int Y0;
    int Y1;
}deco_12;

typedef struct deco_24{
    int A;
    int B;
    int Y0;
    int Y1;
    int Y2;
    int Y3;
}deco_24;

typedef struct deco_38{
    int A;
    int B;
    int C;
    int Y0;
    int Y1;
    int Y2;
    int Y3;
    int Y4;
    int Y5;
    int Y6;
    int Y7;
}deco_38;

typedef enum error_edt{
    PASS_EDT = 0,
    FAIL_EDT= -1
}error_edt;

error_edt getData_2 (deco_12 *values);
error_edt getData_3 (deco_24 *values);
error_edt getData_4 (deco_38 *values);
error_edt decoder_12(deco_12 *values);
error_edt decoder_24(deco_24 *values);
error_edt decoder_38(deco_38 *values);
error_edt getData_5 (enco_21 *values);
error_edt getData_6 (enco_42 *values);
error_edt getData_7 (enco_83 *values);
error_edt encoder_21(enco_21 *values);
error_edt encoder_42(enco_42 *values);
error_edt encoder_83(enco_83 *values);
#endif // CONVERSION_H_INCLUDED
