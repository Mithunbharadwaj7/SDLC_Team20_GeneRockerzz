# DIGITAL ELECTRONICS MANUAL
#  Requirements
## Introduction
### What is Digital Electronics?


Digital electronics is a field of electronics involving the study of digital signals. These circuits usually  made from large assemblies of logic gates, often packaged in integrated circuits. Digital systems constructed by using logic gates. These gates are the AND, OR, NOT, NAND, NOR, EXOR and EXNOR gates.The OR gate is an electronic circuit that gives a high output if one or more of its inputs are high.
In digital circuits, an adder–subtractor is a circuit that is capable of adding or subtracting numbers. Similarly to the half adder, a half subtractor subtracts two 1 bit binary numbers to give two outputs, difference and borrow.An adder is a digital circuit that performs addition of numbers. In processor it is used to calculate addresses, table indices, and similar operations. It can be constructed for many numerical representations, such as binary-coded decima

### Basic Logic & Universal Gates in Digital Electronics 


All digital systems constructed by only three basic logic gates. These basic gates are called the AND gate, the OR gate, and the NOT gate. The Universal gates are NAND gate and NOR gate.


## Data Transmissions

1.Adder is a digital circuit that performs addition of numbers. In processor it is used to calculate addresses, table indices, and similar operations. It can be constructed for many numerical representations, such as binary-coded decimal.
A subtractor is a combinational circuit that performs subtraction of two bits, one is minuend and other is subtrahend, taking into account borrow of the previous adjacent lower minuend bit. This circuit has three inputs and two outputs.

|Types of Adders|Types of Subtractors|
|:--:|:--:|
Half Adder | Half Subtractor
Full Adder | Full Subtractor

2.A multiplexer (Mux) is a combinational circuit that uses several data inputs to generate a single output. A demultiplexer (Demux) is also a combinational circuit that uses single input that can be directed throughout several outputs.The main difference between a multiplexer and a de-multiplexer is that a multiplexer takes two or more signals and encodes them on a wire, whereas a de-multiplexer does reverse to what the multiplexer does.

|Types of multiplexers|Types of Demultiplexers|
|:--:|:--:|
2-1 Multiplexer | 1-2 Demultiplexer  
4-1 Multiplexer | 1-4 Demultiplexer 
8-1 Multiplexer | 1-8 Demultiplexer 

3.Encoder is a device that converts the active data signal into a coded message format. However, a decoder performs inverse operation of the encoder and thus converts the coded input into original data input.



|Types of Encoders|Types of decoders|
|:--:|:--:|
2*1 Encoder | 1*2 Decoder
4*2 Encoder | 2*4 Decoder
8*3 Encoder | 3*8 Decoder


4.A Comparator is a combinational circuit that gives output in terms of A>B, A<B, and A=B. This is entirely expected from the name. A digital comparator’s purpose is to compare numbers and represent their relationship with each other. 
|Types of Comparators
|:--:|
One bit comparator 
Two bit comparator 

## Sequential Logic Circuits 

1.Digital flip-flops are memory devices used for storing binary data in sequential logic circuits. Latches are level sensitive and Flip-flops are edge sensitive. It means that the latch’s output change with a change in input levels and the flip-flop’s output only change when there is an edge of controlling signal.

|Flip-flops|Latches|
|:--:|:--:|
JK Flip-Flop  | JK Latch
SR (Set-Reset) Flip-Flop | SR Latch
Data or Delay (D) Flip-Flop | D Latch
Toggle (T) Flip-Flop


2.A digital circuit which is used for a counting pulses is known counter. Counter is the widest application of flip-flops. It is a group of flip-flops with a clock signal applied. Counters are of two types. Asynchronous or ripple counters. Synchronous counters

Synchronous Counters|
|:--:
 4 bit  UP counter 
 4 bit  down couuter
 4 bit  up/down counter
 n bit Johnson counter
 n bit ring counter 
 
                                   





## Advantages Of Digital Electronics

1. Digital Electronic circuits are relatively easy to design.

2. It has higher precision rate in terms of accuracy.

3. Transmitted signals are not lost over long distance.

4. Digital Signals can be stored easily.

5. Digital Circuits have the flexibility that can change the functionality of digital circuits by making changes in software instead of changing actual circuit.


|Combinational Logic Circuit|Sequential Logic Circuit|
|:--:|:--:|
![Combinational Logic Circuit](https://user-images.githubusercontent.com/86546222/130079774-3d461e52-feb2-4038-a1a4-851c86a8c467.gif)|![Sequential Logic Circuit](https://user-images.githubusercontent.com/86546222/130079845-ff3f1066-ca4f-4df8-af16-4c456693ed5c.jpg)


## SWOT Analysis
![swot1](https://user-images.githubusercontent.com/86546222/130312429-bfe9c44c-999a-4e4f-a446-5512411a4128.jpg)

## 5Ws and 1H

### Who:
Intended for people who want to work with digital logic circuits and understand it's working.

### What:
It provides working of various digital circuits.

### When:
It can be used to get digital outputs to design combnational digital circuits.

### Where:
It can be used in simple mini-projects and lab work

### Why:
This gives a basic building block for developing major digital circuits.

### How:
we take the input for every circuit, apply logical calculations for it and give the required output.

# High level requirements

|ID|Description|Status|
|--|--|--|
|HL1|Working of Logic gates|Implemented|
|HL2|Working of adders and subtractors|Implemented|
|HL3|Multiplexer and demultiplexer working|Implemented|
|HL4|Encoder and decoder working|Implemented|
|HL5|Latches and flip flop working|Implemented|
|HL6|Counters concept|Implemented|


# Low level requirements

|ID|Description|HLR|Status|
|--|--|--|--|
|LL1|And Gate|HL1|Implemented|
|LL2|OR Gate|HL1|Implemented|
|LL3|Not Gate|HL1|Implemented|
|LL4|NAND Gate|HL1|Implemented|
|LL5|NOR Gate|HL1|Implemented|
|LL6|XOR Gate|HL1|Implemented|
|LL7|XNor Gate|HL1|Implemented|
|LL1|Half Adder|HL2|Implemented|
|LL2|Half Subtractor|HL2|Implemented|
|LL3|Full Adder|HL2|Implemented|
|LL4|Full Subtractor|HL2|Implemented|
|LL1|2:1 MUX|HL3|Implemented|
|LL2|4:1 MUX|HL3|Implemented|
|LL3|8:1 MUX|HL3|Implemented|
|LL4|1:2 DE-MUX|HL3|Implemented|
|LL5|1:4 DE-MUX|HL3|Implemented|
|LL6|1:8 DE-MUX|HL3|Implemented|
|LL1|2*1 Encoder|HL4|Implemented|
|LL2|4*2 Encoder|HL4|Implemented|
|LL3|8*3 Encoder|HL4|Implemented|
|LL4|1*2 Decoder|HL4|Implemented|
|LL5|2*4 Decoder|HL4|Implemented|
|LL6|3*8 Decoder|HL4|Implemented|
|LL1|SR Latch|HL5|Implemented|
|LL2|D Latch|HL5|Implemented|
|LL3|JK Latch|HL5|Implemented|
|LL4|T Latch|HL5|Implemented|
|LL5|D FlipFlop|HL5|Implemented|
|LL6|T FlipFlop|HL5|Implemented|
|LL7|SR FlipFlop|HL5|Implemented|
|LL8|JK FlipFlop|HL5|Implemented|
|LL1|Up Counter|HL6|Implemented|
|LL2|Down Counter|HL6|Implemented|
|LL3|UpDown Counter|HL6|Implemented|
|LL4|Ring Counter|HL6|Implemented|
|LL5|Jhonson Counter|HL6|Implemented|

