# A01 - LED Train Pattern on LEDs

## Problem Statement

Develop an Embedded C program to display a train-like pattern on 8 LEDs connected to the PIC18F4580 development board.

## Objective

Simulate the movement of a train entering and exiting a tunnel using LEDs.

## Requirements

### Exit Operation (Train Coming Out of Tunnel)

* LEDs should turn ON one by one.
* Initially, LEDs glow from Left to Right.
* Each LED should turn ON approximately every second.
* After completion, all LEDs remain ON.

Example:

```text
10000000
11000000
11100000
11110000
11111000
11111100
11111110
11111111
```

### Entry Operation (Train Entering Tunnel)

* LEDs should turn OFF one by one.
* LEDs switch OFF from Left to Right.
* After completion, all LEDs become OFF.

Example:

```text
01111111
00111111
00011111
00001111
00000111
00000011
00000001
00000000
```

### Direction Change

After completing one Exit and Entry cycle:

* Reverse the direction.
* LEDs should now move from Right to Left.
* Continue alternating directions after every complete cycle.

## Input Requirements

* No external inputs.
* Fully software controlled.

## Output Requirements

* LED Train Pattern
* Bidirectional movement
* Continuous operation

## Hardware Used

* PIC18F4580 Microcontroller
* 8 LEDs
* Development Board

## Concepts Used

* GPIO Port Programming
* Bit Manipulation
* Delay Generation
* Pattern Generation

## Files

* main.c
* main.h

## Expected Learning Outcomes

* LED Interfacing
* Embedded C Programming
* Bitwise Operations
* State-Based Pattern Design

## Controller

PIC18F4580

## Language

Embedded C

