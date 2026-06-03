/*
 * File:   main.c
 * Author: ajjus
 *
 * Created on 16 March, 2026, 12:46 PM
 */

#include <xc.h>

#include "ssd_head.h"

void main(void)
{
    init_ssd_display();
    
    unsigned char digit[]={ZERO_dig,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
    int count=0;
    int delay=0;
    unsigned char ssd[4];
    
    while(1)
    {
        ssd[0]=digit[count/1000];
        ssd[1]=digit[(count/100)%10];
        ssd[2]=digit[(count/10)%10];
        ssd[3]=digit[count%10];
        
        display_ssd(ssd);
        
        if(delay++==50)
        {
            delay=0;
            if(count++==9999)
            {
                count=0;
            }
        }
        
    }
    return;
}
