/*
 * File:   assign5_main.c
 * Author: ajjus
 *
 * Created on 8 April, 2026, 12:13 PM
 */

#include <xc.h>
#include "key_press.h"
#include "ssd_display.h"
#include "internal_eeprom.h"

void init_config()
{
    init_digital_keypad();
}

void main(void) 
{
    init_config();
    init_ssd_display();

    unsigned char digit[] = {
        ZERO_digit, ONE, TWO,THREE, FOUR,
        FIVE, SIX, SEVEN, EIGHT, NINE
    };

    unsigned char ssd[4];
    
    int count = 0;
    int delay = 0;
    int once = 1;   // this is for whenever the switch is pressed once it should increment by one

    
   
    
    
    //reading the data from the eeprom
    count = read_internal_eeprom(0x00);
    count = (count*10)+read_internal_eeprom(0x01);
    count = (count*10)+read_internal_eeprom(0x02);
    count = (count*10)+read_internal_eeprom(0x03);

   
    while(1)
    {
        unsigned char key = read_digital_keypad(LEVEL);

        // Button pressed
        if(key == SW2)
        {
             //writing the data into the eeprom
    write_internal_eeprom(0x03, count % 10);
    write_internal_eeprom(0x02, (count / 10) % 10);
    write_internal_eeprom(0x01, (count / 100) % 10);
    write_internal_eeprom(0x00, count / 1000);
            
        }
        else if(key == SW1)
        {
            delay++;

            // Long press ? reset
            if(delay >= 200)
            {
                count = 0;
            }

            // Short press ? increment only once
            if(once == 1 && delay < 200)
            {
                count++;
                if(count > 9999)
                    count = 0;

                once = 0;   // prevent multiple increments
            }
        }
        else
        {
            // Button released
            delay = 0;
            once = 1;   // ready for next press
        }

        //  ALWAYS display
        ssd[0] = digit[count / 1000];
        ssd[1] = digit[(count / 100) % 10];
        ssd[2] = digit[(count / 10) % 10];
        ssd[3] = digit[count % 10];

        display_ssd(ssd);
    }
}

