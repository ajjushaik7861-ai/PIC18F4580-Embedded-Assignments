/* 
 * File:   external_interrupt.h
 * Author: ajjus
 *
 * Created on 9 April, 2026, 12:05 PM
 */

#ifndef EXTERNAL_INTERRUPT_H
#define	EXTERNAL_INTERRUPT_H

void init_ssd(void);
void display_ssd(unsigned char *);
void init_external_interrupt(void);

#define ONE 0x21
#define TWO 0xCB
#define THREE 0x6B
#define FOUR 0x2D

#endif	/* EXTERNAL_INTERRUPT_H */

