# A04 - 4 Digit Key Press Counter

## Problem Statement

Develop an Embedded C program to implement a 4-digit key press counter using a Digital Keypad and Seven Segment Display (SSD).

## Objective

Count the number of key presses using a single switch and display the count on a 4-digit SSD.

## Input Requirements

### Digital Keypad

| Input                         | Function          |
| ----------------------------- | ----------------- |
| DKS1 (Short Press)            | Increment Counter |
| DKS1 (Long Press - 2 Seconds) | Reset Counter     |

## Output Requirements

* Display the count on a 4-digit Seven Segment Display.
* Increment the count by 1 for every valid key press.
* Reset the count to 0000 when DKS1 is pressed continuously for 2 seconds.
* Counter should operate continuously.

## Functional Description

### Counter Increment

When DKS1 is pressed and released:

```text
0000 → 0001
0001 → 0002
0002 → 0003
...
9998 → 9999
```

### Counter Reset

When DKS1 is held continuously for approximately 2 seconds:

```text
Current Count → 0000
```

### SSD Display Format

Example:

```text
0000
0001
0015
0123
1024
9999
```

## Hardware Used

* PIC18F4580 Microcontroller
* Digital Keypad
* 4-Digit Seven Segment Display (SSD)

## Concepts Used

* GPIO Programming
* Digital Keypad Interface
* SSD Multiplexing
* Long Press Detection
* Counter Implementation
* Embedded C Programming

## Files

* main.c
* ssd.c
* ssd.h
* digital_keypad.c
* digital_keypad.h

## Expected Learning Outcomes

* Seven Segment Display Interfacing
* Keypad Interfacing
* Event Detection
* Long Key Press Handling
* Counter Design
* Embedded C Application Development

## Controller

PIC18F4580

## Language

Embedded C

## Author

MD Abdul Azeez

