#include <stdio.h>
#include "and.h"

int main(){
    and_two data1;
    and_three data2;
    char ch = 'C';
    printf ("\nEnter C to compute combinational circuit parameters\n"
             "------------------------------------------------------------------------\n"
             "Enter S to compute sequential circuit parameters\n"
             "------------------------------------------------------------------------\n");
    scanf("%s",&ch);
    if (ch == 'C' || ch == 'c'){
        printf("\nThe following operations are provided\n"
                  "-----------------------------------------------\n"
                  "Enter 1 to analyse Gates | a : AND gate with two inputs\n"
                  "                         | b : AND gate with three inputs\n");
                  /*more printf statements needs to be added*/
        scanf("%s",&ch);
        if (ch == 'a'){
            getDataFromFile1 (&data1);
            and_two_input (&data1);
            printf("The result of AND gate with two inputs is %d",data1._res1);
        }
        else if (ch == 'b'){
            getDataFromFile2 (&data2);
            and_three_input (&data2);
            printf("The result of AND gate with three inputs is %d",data2._res2);
        }
    }
}