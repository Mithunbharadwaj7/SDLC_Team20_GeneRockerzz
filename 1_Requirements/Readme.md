# DIGITAL ELECTRONICS MANUAL
#  Requirements
## Introduction
### What is Digital Electronics?


Digital electronics is a field of electronics involving the study of digital signals. These circuits usually  made from large assemblies of logic gates, often packaged in integrated circuits. Digital systems constructed by using logic gates. These gates are the AND, OR, NOT, NAND, NOR, EXOR and EXNOR gates.The OR gate is an electronic circuit that gives a high output if one or more of its inputs are high.
In digital circuits, an adder–subtractor is a circuit that is capable of adding or subtracting numbers. Similarly to the half adder, a half subtractor subtracts two 1 bit binary numbers to give two outputs, difference and borrow.

### Basic Logic & Universal Gates in Digital Electronics 


All digital systems constructed by only three basic logic gates. These basic gates are called the AND gate, the OR gate, and the NOT gate. The Universal gates are NAND gate and NOR gate.


## Data Transmissions

1.A multiplexer (Mux) is a combinational circuit that uses several data inputs to generate a single output. A demultiplexer (Demux) is also a combinational circuit that uses single input that can be directed throughout several outputs.The main difference between a multiplexer and a de-multiplexer is that a multiplexer takes two or more signals and encodes them on a wire, whereas a de-multiplexer does reverse to what the multiplexer does.

|Types of multiplexers|Types of Demultiplexers|
|:--:|:--:|
2-1 Multiplexer | 1-2 Demultiplexer  
4-1 Multiplexer | 1-4 Demultiplexer 
8-1 Multiplexer | 1-8 Demultiplexer 

2.Encoder is a device that converts the active data signal into a coded message format. However, a decoder performs inverse operation of the encoder and thus converts the coded input into original data input.


|Types of Encoders|Types of decoders|
|:--:|:--:|
2*1 Encoder | 1*2 Decoder
4*2 Encoder | 2*4 Decoder
8*3 Encoder | 3*8 Decoder

## Sequential Logic Circuits 

1.Digital flip-flops are memory devices used for storing binary data in sequential logic circuits. Latches are level sensitive and Flip-flops are edge sensitive. It means that the latch’s output change with a change in input levels and the flip-flop’s output only change when there is an edge of controlling signal.

|Flip-flops|Latches|
|:--:|:--:|
JK Flip-Flop  | JK Latch
SR (Set-Reset) Flip-Flop | SR Latch
Data or Delay (D) Flip-Flop | D Latch
Toggle (T) Flip-Flop


2.A digital circuit which is used for a counting pulses is known counter. Counter is the widest application of flip-flops. It is a group of flip-flops with a clock signal applied. Counters are of two types. Asynchronous or ripple counters. Synchronous counters

|Asynchronous counters |Synchronous Counters|
|:--:|:--:|
4 bit synchronous UP counter | 4 bit synchronous UP counter
4 bit synchronous DOWN counter| 4 bit synchronous DOWN counter
4 bit synchronous UP / DOWN counter| 4 bit synchronous UP / DOWN counter
                                   





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
|HL1|Truth table of gates|Implemented|
|HL2|Binary calculations|Implemented|
|HL3|Multiplexer and demultiplexer working|Implemented|
|HL4|Encoder and decoder working|Implemented|
|HL5|Latches and flip flop working|Implemented|


