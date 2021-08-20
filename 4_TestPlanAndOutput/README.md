# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |          
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|      
| HH_1 | Selection of Digital or Sequential Circuits by user. | By choosing 1 or 2 for the required operation | User should be able to select either the combinational or sequential circuit | User successfully selects either the combinational or sequential circuit Calculator | Technical | 
| HH_2 | Selection of Combinational Calculator : Gate Calculator or Adder/Subtractor Calculator or MUX/DEMUX Calculator or Encoder/Decoder Calculator. | By choosing options between 1 to 5 for the required action | User should be able to select any of the combinational calculators | User successfully selects the required combinational calculator | Technical | 
| HH_3 | Selection of Sequential Calculator : Latch Calculator or Flip-flop Calculator or Counters. | By choosing options between 1 to 3 for the required action | User should be able to select any of the combinational calculators | User successfully selects the required sequential calculator | Technical | 
| HH_4 | Checking for other options other than specified in program. | By choosing other values that are not mentioned | "Enter the valid option", is to be printed | "Enter the valid option", is printed | Boundary based |



## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|-----------------------------|------------|-------------|----------------|------------------|
| LL_1 |Checking whether giving 00,01,10,11 to AND gate produces the required output | By giving all the four input combinations in A and B |Success | Success | Requirement |
| LL_2 |Checking whether giving 00,01,10,11 to OR gate produces the required output |By giving all the four input combinations in A and B | Success |Success |Requirement |
| LL_3 |Checking whether giving 0 or 1 to NOT gate produces the required output|By giving all the two input combinations in A | Success | Success | Requirement |
| LL_4 |Checking whether giving 00,01,10,11 to NAND gate produces the required output |By giving all the four input combinations in A and B | Success | Success |Requirement |
| LL_5 |Checking whether giving 00,01,10,11 to NOR gate produces the required output |By giving all the four input combinations in A and B |Success  | Success | Requirement |
| LL_6 |Checking whether giving 00,01,10,11 to XOR gate produces the required output |By giving all the four input combinations in A and B | Success| Success |Requirement |
| LL_7 |Checking whether giving 00,01,10,11 to XNOR gate produces the required output |By giving all the four input combinations in A and B|Success  | Success | Requirement |
| LL_8 |Checking whether Half Adder provides required output |By giving all the four input combinations in A and B|Success  | Success | Requirement |
| LL_9 |Checking whether Half Subtractor provides the required output |By giving all the four input combinations in A and B|Success  | Success | Requirement |
| LL_10 |Checking whether Full Adder provides the required output |By giving all the eight input combinations in A,B and C|Success  | Success | Requirement|
| LL_11 |Checking whether One bit comparator provides the required output |Single bit two inputs A,B|Success  | Success |Requirement|
| LL_12 |Checking whether Two bit comparator provides the required output |Two binary inputs each of two bits A0,A1,B0,B1|Success  | Success |Requirement|
| LL_13 |Checking whether Multiplexer provides the required output |By using all combinations 2:1,4:1,8:1|Success  | Success |Requirement|
| LL_14 |Checking whether Demultiplexer provides the required output |By using all combinations 1:2,1:4,1:8|Success  | Success |Requirement|
| LL_15 |Checking whether Encoder provides the required output |By using all combinations 2x1, 4x2, 8x3|Success  | Success |Requirement|
| LL_16 |Checking whether Decoder provides the required output |By using all combinations 1x2, 2x4, 3x8|Success  | Success |Requirement|

