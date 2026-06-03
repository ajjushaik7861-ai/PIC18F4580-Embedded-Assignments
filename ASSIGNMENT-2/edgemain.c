/*
 * File:   edge_trigger.c
 * Author: ajjus
 *
 * Created on 11 March, 2026, 12:28 PM
 */

#include <xc.h>
#include"edge.h"

void init_config() {
    init_digital_keypad();
}

void main(void) {
    init_config();
    TRISB = 0X00;
    PORTB = 0x00;
    unsigned int i = 0, j = 0, flag = 0, flag1 = 1, pattern = 0;
    unsigned int wait = 0;
    while (1) {
        unsigned char key = read_digital_keypad(EDGE);
        if (key == SW1) {
            pattern = 1;
        } else if (key == SW2) {
            pattern = 2;
        } else if (key == SW3) {
            pattern = 3;
        } else if (key == SW4) {
            pattern = 4;
        }

        if (pattern == 1) {
            if (wait++ == 5000) {
                if (i < 8) {
                    PORTB = (PORTB << 1) | 1;
                    i++;
                } else if (i < 16) {
                    PORTB = (PORTB << 1);
                    i++;
                } else if (i < 24) {
                    PORTB = (PORTB >> 1) | 0x80;
                    i++;
                } else if (i < 32) {
                    PORTB = (PORTB >> 1);
                    i++;
                } else {
                    i = 0;
                }
                wait = 0;
            }
        } else if (pattern == 2) {
            if (wait++ == 5000) {
                if (j < 8) {
                    PORTB = (PORTB << 1) | 1;
                    j++;
                } else if (j >= 8 && j < 16) {
                    PORTB = (PORTB << 1);
                    j++;
                } else if (j == 16) {
                    j = 0;
                }
                wait = 0;
            }
        } else if (pattern == 3) {
            if (wait++ == 5000) {
                if (flag == 0) {
                    PORTB = 0xAA;
                    flag = 1;
                } else {
                    PORTB = 0x55;
                    flag = 0;
                }
                wait = 0;
            }
        } else if (pattern == 4) {
            if (wait++ == 5000) {
                if (flag1 == 0) {
                    PORTB = 0x0F;
                    flag1 = 1;

                } else {
                    PORTB = 0xF0;
                    flag1 = 0;
                }
                wait = 0;
            }
        }
    }
    return;
}


