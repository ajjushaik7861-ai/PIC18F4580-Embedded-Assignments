# A05 - 4 Digit Key Press Counter with Persistence

## Problem Statement

Develop an Embedded C program to implement a 4-digit key press counter with persistence using the Internal EEPROM of the PIC18F4580 microcontroller.

## Objective

Count key presses, display the count on a 4-digit Seven Segment Display (SSD), and store the count in EEPROM so that it can be restored after power-up or reset.

## Input Requirements

### Digital Keypad

| Input                         | Function                      |
| ----------------------------- | ----------------------------- |
| DKS1 (Short Press)            | Increment Counter             |
| DKS1 (Long Press - 2 Seconds) | Reset Counter                 |
| DKS2                          | Store Current Count in EEPROM |

## Output Requirements

* Display the current count on a 4-digit SSD.
* Increment the count by 1 on every valid key press.
* Reset the count to 0000 when DKS1 is pressed continuously for 2 seconds.
* Store the current count into Internal EEPROM when DKS2 is pressed.
* On power-up or reset, retrieve the previously stored value from EEPROM and continue counting from that value.

## Functional Description

### Power-Up Operation

On startup:

* Read the stored count value from EEPROM.
* Display the retrieved count on SSD.

Example:

```text
Stored Value in EEPROM = 0250

After Reset:

SSD Display = 0250
```

### Counter Increment

On every short press of DKS1:

```text
0250 → 0251
0251 → 0252
0252 → 0253
```

### Counter Reset

On long press of DKS1 (approximately 2 seconds):

```text
Current Count → 0000
```

### EEPROM Store Operation

On pressing DKS2:

```text
Current Count = 0345

Store 0345 into EEPROM
```

### Persistence Example

```text
Count = 0345

Press DKS2 → Store in EEPROM

Power OFF

Power ON

Display = 0345
```

## Hardware Used

* PIC18F4580 Microcontroller
* Digital Keypad
* 4-Digit Seven Segment Display (SSD)

## Peripherals Used

* GPIO
* Internal EEPROM
* SSD Multiplexing

## Concepts Used

* EEPROM Read and Write Operations
* Non-Volatile Data Storage
* Keypad Interfacing
* SSD Multiplexing
* Long Press Detection
* Embedded C Programming

## Files

* main.c
* ssd.c
* ssd.h
* digital_keypad.c
* digital_keypad.h
* eeprom.c
* eeprom.h

## Expected Learning Outcomes

* EEPROM Data Persistence
* SSD Display Interfacing
* Keypad Handling
* Long Press Detection
* Non-Volatile Memory Management
* Embedded C Application Development

## Controller

PIC18F4580

## Language

Embedded C

## Author

MD Abdul Azeez

