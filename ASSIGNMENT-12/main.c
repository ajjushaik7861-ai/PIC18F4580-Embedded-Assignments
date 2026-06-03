/*
 * File:   main.c
 * Author: ajjus
 *
 * Created on 23 April, 2026, 12:33 AM
 */

#include<xc.h>
#include"adc_header.h"
#include"timer_header.h"


int timer_cycle = 0;

void init_config(void)
{
    TRISB = 0x00;
    PORTB = 0x00;

    init_timer2();
    init_adc();
}

void main(void)
{
    unsigned int duty_cycle;
    init_config();
  
    while(1)
    {   
        duty_cycle = read_adc(CHANNEL4);
        
        if(timer_cycle < duty_cycle / 10)
        {
            PORTB = 0xFF;
        }
        else
        {
            PORTB = 0x00;
        }
    }
}


