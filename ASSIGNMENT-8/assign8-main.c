/*
 * File:   assign8-main.c
 * Author: ajjus
 *
 * Created on 20 April, 2026, 2:51 PM
 */


#include <xc.h>
#include"ASSIGN-8.h"

unsigned char hour = 0;
unsigned char min = 0;

unsigned int count = 0;
unsigned char blink_state = 0;
unsigned char sec_flag = 0;

unsigned char mode_flag = 0;
unsigned char field_flag = 0;
unsigned char key = 0;

void main(void) {

    init_config();

    unsigned char digit[] = {ZERO_digit, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
    unsigned char ssd[4];

    while (1) {
        ssd[0] = digit[hour / 10];
        ssd[1] = digit[hour % 10];

        ssd[2] = digit[min / 10];
        ssd[3] = digit[min % 10];

        if (mode_flag == RUN_MODE) {
            if (blink_state) {
                ssd[1] |= DECIMAL;
            }
        }
        
        if (mode_flag == EDIT_MODE) {
            if (blink_state == 0) {
                if (field_flag == HOUR_FIELD) {
                    ssd[0] = 0x00;
                    ssd[1] = 0x00;
                } else if (field_flag == MINUTE_FIELD) {
                    ssd[2] = 0x00;
                    ssd[3] = 0x00;
                }
            }
        }

        display_ssd(ssd);

        if (mode_flag == RUN_MODE) {
            run_mode_logic();
        } else if (mode_flag == EDIT_MODE) {
            edit_mode_logic();
        }
    }
    return;
}

