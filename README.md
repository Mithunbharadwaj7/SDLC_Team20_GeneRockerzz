# DIGITAL ELECTRONICS MANUAL
## Introduction
### What is Digital Electronics?


Digital electronics is a field of electronics involving the study of digital signals. These circuits usually  made from large assemblies of logic gates, often packaged in integrated circuits. There are two types of logic circuits in Digital Electronics.
1. Combinational Circuits
2. Sequential Circuits

1.  Combinational Circuits:
Combinational circuits are defined as the time independent circuits which do not depends upon previous inputs to generate any output are termed as combinational circuits. Examples are logic gates, adders and subtractors, mux and demux, enoders and decoders. Some of the features of Combinational Circuits are:
* In this output depends only upon present input.
* There is no feedback between input and output.
* Elementary building blocks: Logic gates
* Combinational circuits don’t have capability to store any state.
* As combinational circuits don’t have clock, they don’t require triggering.
* These circuits do not have any memory element.

2. Sequential Circuits:
Sequential circuits are those which are dependent on clock cycles and depends on present as well as past inputs to generate any output.
Examples are Latches, flip-flops and counters. Some of the features of Sequential circuits are:
* In this output depends upon present as well as past input.
It is designed tough as compared to combinational circuits.
* There exists a feedback path between input and output.
* Elementary building blocks: Flip-flops
* Mainly used for storing data.
* As sequential circuits are clock dependent they need triggering.
* These circuits have memory element.

<br/>

## Advantages Of Digital Electronics

1. Digital Electronic circuits are relatively easy to design.

2. It has higher precision rate in terms of accuracy.

3. Transmitted signals are not lost over long distance.

4. Digital Signals can be stored easily.

5. Digital Circuits have the flexibility that can change the functionality of digital circuits by making changes in software instead of changing actual circuit.
      
<br/>

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Designs`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Testplan`      | Documents with test plans and procedures
`5_Report`        | Folder consisting of documentation of the project 
`6_Imagesandvideos`   | Images and Videos 
`7_Daily Stand up`   | Document consisting of daily contributions of team members 

<br/>

## Contributors list
| PS No. | Name | Features | Issues raised | Issues solved | No. of test cases | Test cases passed |
| --- | --- | --- | --- | --- | --- | --- |
| 99005890 | Ambika C L | Came up with high level design for the project. Designed encoders, counters |
| 99005902 | Achutha V Vyas | Came up with requirements for the project. Designed subtractors, flip-flops. Added git inspector workflow|
| 99005901 | Arpita Patnaik | Came up with test plan for the project. Designed adders and contributed to src files, main file and makefile|
| 99005898 | Deepika Veerapaneni | Came up with low level design for the project. Designed MUX, filp-flops and gates. Contributed to test cases. Added unit test workflow|
| 99005876 | Indiya B Henly | Came up with low level design for the project. Designed gates. Contributed to main, test file and documentation |
| 99005910 | Megha M | Came up with high level design for the project. Deisgned demux and counters. Added valgrind workflow |
| 99005880 | Mithun Bharadwaj | Came up with requirements for the project. Designed decoders and latches. Added cpp check workflow |
| 99005898 | Sravani Gannavarapu | Came up with requirements for the project. Designed encoders and counters. |
| 99005872 | Raviteja D | Came up with test plan for the project. Designed mux and latches. Added C-build workflow |
<br/>

## Challenges faced and overcome
* Selecting the topic of the project was challenging due to conflict of interest. Later the topic was sorted out by mutual decisions.
* Working collaboratively was tough in the beginning. Later the problem was resolved by meetings which were held as and when required. 
* Dividing the topics and working out as decided was a bit challenging as everybody were working together and pushing commits which caused confusuion. Later was sorted out by peer meetings.
* Using text files to store values and using it later was confusing. Was resolved by peer to peer help.
* Working within the time constraint was difficult. Was fixed by sharing the overall work and working in small groups.

<br/>

## Running the program
Navigate to the directory containing this project after cloning from the terminal and run the following command:
* `make run` to execute the main program and get the output
* `make test` to run all the test cases and shows PASS or FAIL results

















