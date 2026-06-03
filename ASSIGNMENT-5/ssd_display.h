/* 
 * File:   ssd_display.h
 * Author: ajjus
 *
 * Created on 8 April, 2026, 12:27 PM
 */

#ifndef SSD_DISPLAY_H
#define	SSD_DISPLAY_H

void init_ssd_display(void);
void display_ssd(unsigned char *SSD);

#define ZERO_digit  0xE7
#define ONE 0x21
#define TWO 0xCB
#define THREE 0x6B
#define FOUR 0x2D
#define FIVE 0x6E
#define SIX  0xEE
#define SEVEN 0x23
#define EIGHT 0xEF
#define NINE  0x6F

#endif	/* SSD_DISPLAY_H */

