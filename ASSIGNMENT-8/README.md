# A08 - Dynamic Clock on SSD using Internal Timer

## Problem Statement

Develop an Embedded C program to implement a configurable 24-hour digital clock on a 4-digit Seven Segment Display (SSD) using the internal timer of the PIC18F4580 microcontroller.

The clock should support both Run Mode and Configuration Mode, allowing the user to set and modify the current time.

## Objective

Implement a real-time clock using internal timers and provide user-controlled time configuration through a Digital Keypad.

## Input Requirements

| Input | Function                 |
| ----- | ------------------------ |
| DKS1  | Increment Selected Field |
| DKS2  | Decrement Selected Field |
| DKS3  | Choose Field             |
| DKS4  | Set / Edit Mode          |
| Timer | Time Base Generation     |

## Output Requirements

### Run Mode

* Clock starts from **00:00** after power-up or reset.
* Clock operates in **24-Hour Format**.
* Hours and minutes are displayed on the SSD.
* The decimal point separating Hours and Minutes blinks every 500 ms.

Example:

```text
00.00
12.45
23.59
```

### Time Separator

The decimal point acts as the clock separator and blinks at 0.5 Hz.

Example:

```text
12.45
12 45
12.45
12 45
```

## Configuration Mode

Configuration mode is entered using **DKS4 (Set/Edit Key)**.

### Indication

* Minute field blinks every 500 ms indicating configuration mode.

Example:

```text
12.45  ← Minutes blinking
```

### Field Selection

Press **DKS3** to select the field.

Available fields:

```text
Hours
Minutes
```

The selected field blinks continuously to indicate selection.

### Increment Operation

Press **DKS1** to increase the selected field value.

Examples:

```text
12:30 → 13:30
12:30 → 12:31
```

### Decrement Operation

Press **DKS2** to decrease the selected field value.

Examples:

```text
12:30 → 11:30
12:30 → 12:29
```

### Exit Configuration Mode

Press **DKS4** again.

* Configuration mode exits.
* Clock resumes operation from the newly configured time.
* This mode is called **Run Mode**.

## State Diagram

```text
Power ON
    │
    ▼
Run Mode
(Display Time)
    │
DKS4
    ▼
Configuration Mode
    │
Select Field (DKS3)
    │
Increment (DKS1)
    │
Decrement (DKS2)
    │
DKS4
    ▼
Run Mode
```

## Hardware Used

* PIC18F4580 Microcontroller
* 4-Digit Seven Segment Display (SSD)
* Digital Keypad

## Peripherals Used

* Timer0 / Internal Timer
* GPIO
* SSD Multiplexing

## Concepts Used

* Real-Time Clock Implementation
* Timer Interrupts
* SSD Multiplexing
* Digital Keypad Interfacing
* State Machine Design
* Time Configuration Logic
* Embedded C Programming

## Files

* main.c
* ssd.c
* ssd.h
* digital_keypad.c
* digital_keypad.h
* timer.c
* timer.h

## Expected Learning Outcomes

* Internal Timer Configuration
* Real-Time Clock Development
* SSD Interfacing
* User Interface Design
* State Machine Implementation
* Embedded Application Development

## Controller

PIC18F4580

## Language

Embedded C

## Author

MD Abdul Azeez
