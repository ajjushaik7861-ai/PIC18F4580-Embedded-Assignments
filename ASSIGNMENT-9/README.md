# A09 - Right Scrolling Message Marquee on CLCD

## Problem Statement

Develop an Embedded C program to implement a right-scrolling message marquee on a Character LCD (CLCD).

A predefined message should continuously scroll from left to right across the display.

## Objective

Demonstrate text manipulation and display control techniques using a Character LCD.

## Input Requirements

| Input          | Description                                |
| -------------- | ------------------------------------------ |
| Static Message | Hardcoded message stored in program memory |

Example:

```text
"HELLO WORLD"
```

## Output Requirements

1. As soon as the board is powered ON or reset, the message should begin scrolling.
2. The message should scroll from left to right.
3. The scrolling operation should repeat indefinitely.
4. Scrolling frequency should be approximately 0.5 Hz.
5. No timer peripherals should be used.

## Functional Description

### Initial Display

Example:

```text
HELLO WORLD
```

### Right Scrolling Operation

The message shifts one position to the right at regular intervals.

Example:

```text
HELLO WORLD
 HELLO WORLD
  HELLO WORLD
   HELLO WORLD
```

When the message reaches the end of the display:

```text
                HELLO WORLD
```

the scrolling sequence restarts.

### Continuous Marquee

The scrolling operation repeats indefinitely.

```text
Start
  ↓
Scroll Right
  ↓
Reach End
  ↓
Restart
  ↓
Scroll Right
```

## Hardware Used

* PIC18F4580 Microcontroller
* 16x2 Character LCD (CLCD)

## Peripherals Used

* GPIO
* Character LCD Interface

## Concepts Used

* CLCD Interfacing
* String Manipulation
* Display Buffer Management
* Delay-Based Animation
* Embedded C Programming

## Files

* main.c
* clcd.c
* clcd.h

## Expected Learning Outcomes

* Character LCD Programming
* String Handling in Embedded Systems
* Display Animation Techniques
* User Interface Development
* Embedded C Application Design

## Sample Output

```text
HELLO WORLD
 HELLO WORLD
  HELLO WORLD
   HELLO WORLD
```

## Controller

PIC18F4580

## Language

Embedded C

## Author

MD Abdul Azeez
