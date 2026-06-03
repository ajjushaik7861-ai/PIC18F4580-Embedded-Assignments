/*
 * File:   main.c
 * Author: ajjus
 *
 * Created on 20 April, 2026, 11:22 PM
 */


#include <xc.h>
#include "assign-9.h"

void delay_ms(unsigned int ms)
{
    while(ms--)
        __delay_ms(1);
}

void main(void)
{
    init_clcd();

    char msg[] = "Welcome-to-BMTC-Bangalore";
char display[17];  // 16 chars + null

int pos = 0;

while(1)
{
    clcd_print("GOOD MORNING   ", LINE1(0));

    // Fill display with spaces
    for(int i = 0; i < 16; i++)
        display[i] = ' ';

    display[16] = '\0';

    // Copy characters from msg into display from right
    int j = 15;
    for(int i = pos; i >= 0 && j >= 0; i--, j--)
    {
        display[j] = msg[i];
    }

    clcd_print(display, LINE2(0));

    delay_ms(500);

    pos++;

    if(msg[pos] == '\0')
        pos = 0;
}
}

