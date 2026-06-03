/*
 * File:   toggle.c
 * Author: ajjus
 *
 * Created on 5 March, 2026, 12:04 PM
 */

#include<xc.h>

#define _XTAL_FREQ 20000000

void main(void) 
{
    TRISB = 0X00;
    PORTB = 0X00;
    unsigned long int wait=0;
    int i=0;
    while(1)
    {
      
        if(wait++ == 50000)
        {
           if(i < 8)
           {
               PORTB = PORTB <<1 | 1;
           }
           
           else if(i >= 8 && i< 16)
           {
               PORTB = (PORTB << 1) ;
           }
           
           else if(i >= 16 && i < 24)
           {
               PORTB = PORTB >>1 | 0X80 ;
           }
           
           else if(i>=24 && i < 32)
           {
               PORTB =PORTB >>1  ;
           }
           
           wait = 0;
           i++;
           
           if(i == 32)
            i=0;
        }
    }
    return;
}