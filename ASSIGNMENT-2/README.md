# A02 - Multiple LED Patterns Controlled by Switches

## Problem Statement

Develop an Embedded C program to implement multiple LED patterns on 8 LEDs. The pattern displayed on the LEDs is selected using switches from the Digital Keypad.

## Objective

Control different LED patterns using switch inputs and dynamically change the pattern based on the key pressed.

## Input Requirements

### Digital Keypad

| Switch | Function         |
| ------ | ---------------- |
| SW1    | Select Pattern-1 |
| SW2    | Select Pattern-2 |
| SW3    | Select Pattern-3 |
| SW4    | Select Pattern-4 |

## Output Requirements

* Upon power-up, all LEDs should remain OFF.
* Pressing a switch should activate the corresponding LED pattern.
* The selected pattern should continue running until another switch is pressed.

## Pattern Descriptions

### Pattern-1 : Bidirectional Train Pattern

LEDs glow one by one from Left to Right and then switch OFF one by one.

After completing one cycle, the direction changes from Right to Left.

Example:

```text
10000000
11000000
11100000
...
11111111
01111111
00111111
...
00000000
```

Direction reverses after every complete cycle.

### Pattern-2 : Unidirectional Train Pattern

LEDs glow from Left to Right.

After all LEDs are ON, LEDs switch OFF from Left to Right.

No direction change is performed.

Example:

```text
10000000
11000000
11100000
...
11111111
01111111
00111111
...
00000000
```

Pattern repeats continuously.

### Pattern-3 : Alternate LED Blinking

Alternate LEDs blink continuously.

Example:

```text
10101010
01010101
10101010
01010101
```

### Pattern-4 : Nibble-wise Blinking

The first nibble and second nibble blink alternately.

Example:

```text
11110000
00001111
11110000
00001111
```

## Hardware Used

* PIC18F4580 Microcontroller
* 8 LEDs
* Digital Keypad
* Development Board

## Concepts Used

* GPIO Programming
* Digital Input Handling
* State Machine Design
* LED Pattern Generation
* Switch Debouncing
* Bit Manipulation

## Files

* main.c
* led.c
* led.h
* digital_keypad.c
* digital_keypad.h

## Expected Learning Outcomes

* Digital Input Interfacing
* LED Interfacing
* Pattern Generation Techniques
* Event-Based Programming
* Embedded C Application Development

## Controller

PIC18F4580

## Language

Embedded C

## Author

MD Abdul Azeez

