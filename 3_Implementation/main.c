#include <stdio.h>
#include "gates.h"
#include "adder.h"

int main(){
    and_two data1;
    and_three data2;
    or_two data3;
    or_three data4;
    not_two data5;


    hf_adder data_hf;
    fl_adder data_fl;
    
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

        }
        else if (ch == 'g'){

        }
        else if (ch == 'h'){

        }
        else if (ch == 'i'){

        }
        else if (ch == 'j'){

        }
        else if (ch == 'k'){

        }
        else if (ch == 'l'){

        }
        else if (ch == 'm'){

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

        }
        else if (ch == 'D'){

        }
        else if (ch == '1'){

        }
        else if (ch == '2'){

        }
        else if (ch == '3'){

        }
        else if (ch == '4'){

        }
        else if (ch == '5'){

        }
        else if (ch == '6'){

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