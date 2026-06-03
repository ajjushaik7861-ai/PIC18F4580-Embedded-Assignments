/*
 * File:   assign6_main.c
 * Author: ajjus
 *
 * Created on 9 April, 2026, 12:07 PM
 */


#include <xc.h>
#include"external_interrupt.h"


void main(void) {
    
    init_ssd();
    init_external_interrupt();
    
    unsigned char ssd[4];
    unsigned char digit[] = {ONE, TWO, THREE, FOUR};
    unsigned int delay = 0;
    unsigned int count = 0;
    
    ssd[0] = digit[0];
    ssd[1] = digit[1];
    ssd[2] = digit[2];
    ssd[3] = digit[3];
    
    // LED
    TRISB0 = 1;
    TRISB5 = 0;
    RB5 = 0;
    
    
    while(1)
    {
        // Display 1234 on SSD
        display_ssd(ssd);
        
        // Toggle LED
        if(delay++ == 50)
        {
            RB5 = !RB5;
            delay = 0;
            count++;
        }
        if(count == 10)
        {
            count = 0;
            SLEEP();
        }
    }
    
    return;
}
