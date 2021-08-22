#include <stdio.h>
#include "gates.h"
#include "adder.h"
#include "Subtractor.h"
#include "mux.h"
#include "demux.h"
#include "conversion.h"
#include "latch.h"
#include "jk.h"
#include "flipflop.h"
#include "counter.h"
#include "latch.h"
#include "jk.h"
#include "flipflop.h"
#include "counter.h"

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

    enco_21 data_2x1_ENCODER;
    enco_42 data_4X2_ENCODER;
    enco_83 data_8X3_ENCODER;
    deco_12 data_1X2_DECODER;
    deco_24 data_2X4_DECODER;
    deco_38 data_3X8_DECODER;
    
    SR_lat data_SR_LATCH;
    JK_LA data_JK_LATCH;
    D_lat data_D_LATCH;
    T_LA data_T_LATCH;

    SR_ff data_SR_FF;
    JK_ff data_JK_FF;
    D_ff data_D_FF;
    T_ff data_T_FF;

    up_count data_upcounter;
    down_count data_downcounter;
    up_down_count data_updowncounter;
    johnson_count data_johnsoncounter;
    ring_count data_ringcounter;
    
    char ch = 'C';
    printf ("\nEnter C or cto compute combinational circuit parameters\n"
             "------------------------------------------------------------------------\n"
             "Enter S or s to compute sequential circuit parameters\n"
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
        }
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
            getData_21(&data_2x1_ENCODER);
            encoder_21(&data_2x1_ENCODER);
        }
        else if (ch == 'p'){
            getData_42(&data_4X2_ENCODER);
            encoder_42(&data_4X2_ENCODER);
        }
        else if (ch == 'q'){
            getData_83(&data_8X3_ENCODER);
            encoder_83(&data_8X3_ENCODER);
        }
        else if (ch == 'r'){
            getData_12(&data_1X2_DECODER);
            decoder_12(&data_1X2_DECODER);
        }
        else if (ch == 's'){
            getData_24(&data_2X4_DECODER);
            decoder_24(&data_2X4_DECODER);
        }
        else if (ch== 't'){
            getData_38(&data_3X8_DECODER);
            decoder_38(&data_3X8_DECODER);
        }
        else{
            printf("Enter valid choice.\n");
        }
    }
    else if(ch =='S' || ch == 's')
    {
        printf("\nThe following operations are provided\n"
                  "-----------------------------------------------\n"
                  "Enter any one of them to analyse Latches | a : SR Latch\n"
                  "                                         | b : JK Latch\n"
                  "                                         | c : D Latch\n"
                  "                                         | c : T Latch\n"
                  "-----------------------------------------------------------\n"
                  "Enter any one of them to analyse Flip Flops | A : SR Flip-Flop\n"
                  "                                            | B : JK Flip-Flop\n"
                  "                                            | C : D Flip-Flop\n"
                  "                                            | D : T Flip-Flop\n"
                  "------------------------------------------------------------\n"
                  "Enter any one of them to analyse Counters | o : UP counter \n"
                  "                                          | p : DOWN counter\n"
                  "                                          | q : UP-DOWN counter\n"
                  "                                          | r : JOHNSON counter\n"
                  "                                          | s : RING decoder\n");
        scanf("%s",&ch);
        if (ch == 'a'){
            getDataFromSR_lat(&data_SR_LATCH);
            SR_latch (&data_SR_LATCH);
        }
        else if (ch == 'b'){
            getDataFromJK (&data_JK_LATCH);
            JK (&data_JK_LATCH);
        }
        else if (ch == 'c'){
            getDataFromD_lat (&data_D_LATCH);
            D_latch(&data_D_LATCH);
        }
        else if (ch == 'd'){
            getDataFromT (&data_T_LATCH);
            T (&data_T_LATCH);
        }
        else if (ch == 'A'){
            getDataFromSR_ff (&data_SR_FF);
            SR_FF (&data_SR_FF);
        }
        else if (ch =='B'){
            getDataFromJK_ff (&data_JK_FF);
            JK_FF (&data_JK_FF);
        }
        else if (ch == 'C'){
            getDataFromD_ff (&data_D_FF);
            D_FF (&data_D_FF);

        }
        else if (ch == 'D'){
            getDataFromT_ff (&data_T_FF);
            T_FF (&data_T_FF);
        }
        else if (ch == 'o'){
            getDataFromUpCounter(&data_upcounter);
            up_counter(&data_upcounter);
        }
        else if (ch == 'p'){
            getDataFromDownCounter(&data_downcounter);
            down_counter(&data_downcounter);
        }
        else if (ch == 'q'){
            getDataFromUpDownCounter(&data_updowncounter);
            up_down_counter(&data_updowncounter);
        }
        else if (ch == 'r'){
            getDataFromJohnsonCounter(&data_johnsoncounter);
            johnson_counter(&data_johnsoncounter);
        }
        else if (ch == 's'){
            getDataFromRingCounter(&data_ringcounter);
            ring_counter(&data_ringcounter);
        }
        else{
            printf("Enter the valid choice.\n");
        }
    }
    return 0;
}
