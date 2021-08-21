#include <stdio.h>
#include "gates.h"
#include "adder.h"
#include "Subtractor.h"
#include "mux.h"
#include "demux.h"

int main(){
    and_two data1;
    and_three data2;
    or_two data3;
    or_three data4;
    not_two data5;
    nand_two data6;
    nand_three data7;
    nor_two data8;
    nor_three data9;
    xor_two data10;
    xor_three data11;
    xnor_two data12;
    xnor_three data13;

    hf_adder data_hf;
    fl_adder data_fl;
    half_subtractor data_hs;
    full_subtractor data_fs;

    mux_2x1 data_2x1_MUX;
    mux_4x1 data_4x1_MUX;
    mux_8x1 data_8x1_MUX;

    demux_1x2  data_1x2_DEMUX;
    demux_1x4  data_1x4_DEMUX;
    demux_1x8  data_1x8_DEMUX;
    
    char ch = 'C';
    printf ("\nEnter C to compute combinational circuit parameters\n"
             "------------------------------------------------------------------------\n"
             "Enter S to compute sequential circuit parameters\n"
             "------------------------------------------------------------------------\n");
    scanf("%s",&ch);
    if (ch == 'C' || ch == 'c'){
        printf("\nThe following operations are provided\n"
                  "-----------------------------------------------\n"
                  "Enter any one of them to analyse Gates | a : AND gate with two inputs\n"
                  "                                       | b : AND gate with three inputs\n"
                  "                                       | c : OR gate with two inputs\n"
                  "                                       | d : OR gate with three inputs\n"
                  "                                       | e : NOT gate with two inputs\n"
                  "                                       | f : NAND gate with two inputs\n"
                  "                                       | g : NAND gate with three inputs\n"
                  "                                       | h : NOR gate with two inputs\n"
                  "                                       | i : NOR gate with three inputs\n"
                  "                                       | j : XOR gate with two inputs\n"
                  "                                       | k : XOR gate with three inputs\n"
                  "                                       | l : XNOR gate with two inputs\n"
                  "                                       | m : XNOR gate with three inputs\n"
                  "-----------------------------------------------------------\n"
                  "Enter any one of them to analyse Adders and Substractors | A : Half adder\n"
                  "                                                         | B : Full adder\n"
                  "                                                         | C : Half substractor\n"
                  "                                                         | D : Full substractor\n"
                  "------------------------------------------------------------\n"
                  "Enter any one of them to analyse Mux and Demux | 1 : 2X1 MUX\n"
                  "                                               | 2 : 4X1 MUX\n"
                  "                                               | 3 : 8X1 MUX\n"
                  "                                               | 4 : 1X2 DEMUX\n"
                  "                                               | 5 : 1X4 DEMUX\n"
                  "                                               | 6 : 1X8 DEMUX\n"
                  "------------------------------------------------------------\n"
                  "Enter any one of them to analyse Encoders and Decoders | o : 2X1 encoder\n"
                  "                                                       | p : 4X2 encoder\n"
                  "                                                       | q : 8X3 encoder\n"
                  "                                                       | r : 1X2 decoder\n"
                  "                                                       | s : 2X4 decoder\n"
                  "                                                       | t : 3X8 decoder\n");
                  /*more printf statements needs to be added */
        scanf("%s",&ch);
        if (ch == 'a'){
            getDataFromFile1 (&data1);
            and_two_input (&data1);
            printf("The result of AND gate with two inputs is %d\n",data1._res1);
        }
        else if (ch == 'b'){
            getDataFromFile2 (&data2);
            and_three_input (&data2);
            printf("The result of AND gate with three inputs is %d\n",data2._res2);
        }/** add functions in your respective else-if conditions and printf statements in your respective .c files*/
        else if (ch == 'c'){
            getDataFromFile3 (&data3);
            or_two_input (&data3);
            printf("The result of OR gate with three inputs is %d\n",data3._res3);
        }
        else if (ch == 'd'){
            getDataFromFile4 (&data4);
            or_three_input (&data4);
            printf("The result of OR gate with three inputs is %d\n",data4._res4);
        }
        else if (ch == 'e'){
            getDataFromFile5 (&data5);
            not_two_input (&data5);
            printf("The result of NOT gate is %d\n",data5._res5);
        }
        else if (ch == 'f'){
            getDataFromFile6 (&data6);
            nand_two_input (&data6);
            printf("The result of NAND gate with two inputs is %d\n",data6._res6);
        }
        else if (ch == 'g'){
            getDataFromFile7 (&data7);
            nand_three_input (&data7);
            printf("The result of NAND gate with three inputs is %d\n",data7._res7);
        }
        else if (ch == 'h'){
            getDataFromFile8 (&data8);
            nor_two_input (&data8);
            printf("The result of NOR gate with two inputs is %d\n",data8._res8);
        }
        else if (ch == 'i'){
            getDataFromFile9 (&data9);
            nor_three_input (&data9);
            printf("The result of NOR gate with three inputs is %d\n",data9._res9);

        }
        else if (ch == 'j'){
            getDataFromFile10 (&data10);
            xor_two_input (&data10);
            printf("The result of XOR gate with two inputs is %d\n",data10._res10);
        }
        else if (ch == 'k'){
            getDataFromFile11 (&data11);
            xor_three_input (&data11);
            printf("The result of XOR gate with three inputs is %d\n",data11._res11);

        }
        else if (ch == 'l'){
            getDataFromFile12 (&data12);
            xnor_two_input (&data12);
            printf("The result of XNOR gate with two inputs is %d\n",data12._res12);
        }
        else if (ch == 'm'){
            getDataFromFile13 (&data13);
            xnor_three_input (&data13);
            printf("The result of XNOR gate with three inputs is %d\n",data13._res13);

        }
        else if (ch == 'A'){
            getDataFromHalfAdderFile (&data_hf);
            halfadder (&data_hf);
        }
        else if (ch =='B'){
            getDataFromFullAdderFile (&data_fl);
            fulladder (&data_fl);
        }
        else if (ch == 'C'){
            getData_2 (&data_hs);
            half_Subtractor (&data_hs);

        }
        else if (ch == 'D'){
            getData_3 (&data_fs);
            full_Subtractor (&data_fs);

        }
        else if (ch == '1'){
            getDataFromFile2x1(&data_2x1_MUX);
            MUX_2x1(&data_2x1_MUX);
        }
        else if (ch == '2'){
            getDataFromFile4x1(&data_4x1_MUX);
            MUX_4x1(&data_4x1_MUX);
        }
        else if (ch == '3'){
            getDataFromFile8x1(&data_8x1_MUX);
            MUX_8x1(&data_8x1_MUX);
        }
        else if (ch == '4'){
            getDataFromFile1x2(&data_1x2_DEMUX);
            DEMUX_1x2(&data_1x2_DEMUX);
        }
        else if (ch == '5'){
            getDataFromFile1x4(&data_1x4_DEMUX);
            DEMUX_1x4(&data_1x4_DEMUX);
        }
        else if (ch == '6'){
            getDataFromFile1x8(&data_1x8_DEMUX);
            DEMUX_1x8(&data_1x8_DEMUX);
        }
        else if (ch == 'o'){

        }
        else if (ch == 'p'){

        }
        else if (ch == 'q'){

        }
        else if (ch == 'r'){

        }
        else if (ch == 's'){

        }
        else {

        }
    }
}