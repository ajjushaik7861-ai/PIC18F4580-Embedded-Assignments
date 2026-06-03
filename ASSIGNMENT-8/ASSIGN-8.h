/* 
 * File:   ASSIGN-8.h
 * Author: ajjus
 *
 * Created on 20 April, 2026, 2:50 PM
 */

#ifndef ASSIGN_8_H
#define	ASSIGN_8_H

void init_config(void);
void init_timer0(void);
void display_ssd(unsigned char *SSD);
void edit_mode_logic(void);
void run_mode_logic(void);
unsigned char read_digital_keypad(unsigned char trigger);


#define ZERO_digit 0xE7
#define ONE 0x21
#define TWO 0xCB
#define THREE 0x6B
#define FOUR 0x2D
#define FIVE 0x6E
#define SIX 0xEE
#define SEVEN 0x23
#define EIGHT 0xEF
#define NINE 0x6F
#define DECIMAL 0x10

//modes
#define RUN_MODE 0
#define EDIT_MODE 1

// Field
#define MINUTE_FIELD 0
#define HOUR_FIELD 1 

// Switches
#define INCREMENT 0x0E
#define DECREMENT 0x0D
#define SELECT_FIELD 0x0B
#define SELECT_MODE 0x07
#define ALL_RELEASED 0x0F

#define LEVEL 1         // Level trigger mode
#define EDGE 0          // Edge trigger mode


extern unsigned char hour;
extern unsigned char min;
extern unsigned int count;
extern unsigned char key;


extern unsigned char blink_state;
extern unsigned char sec_flag;
extern unsigned char mode_flag;
extern unsigned char field_flag;

#endif	/* ASSIGN_8_H */

