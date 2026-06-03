/*
 * File:   main.c
 * Author: ajjus
 *
 * Created on 23 April, 2026, 12:07 AM
 */


#include <xc.h>
#include"assign-11.h"


#define PERIOD 100

int sec_count=0;
int count=0;
int program_cycle=0;

void init_config(void)
{
    TRISB=0x00;
    PORTB=0x00;
    TRISC=TRISC|0x0F;
    init_timer2();
}

unsigned char read_digital_edge()
{
    static unsigned char once=1;
    if(((PORTC&0x0F)!=0x0F)&& once)
    {
        once=0;
        return (PORTC&0x0F);
    }
    else if((PORTC&0x0F0)==0x0F)
    {
        once=1;
    }
    return 0x0F;
}
void main(void) 
{
    init_config();
    int duty_cycle=10;
    unsigned char key;
    
    while(1)
    {
        key=read_digital_edge();
        if(key==0x0E)
        {
            duty_cycle=100;
            sec_count=0;
        }
        if(sec_count==5)
        {
            duty_cycle=10;
        }
        if(program_cycle==PERIOD)
        {
            program_cycle=0;
        }
        if(program_cycle<duty_cycle)
        {
            PORTB=0xFF;
        }
        else
        {
            PORTB=0x00;
        }
    }
}
