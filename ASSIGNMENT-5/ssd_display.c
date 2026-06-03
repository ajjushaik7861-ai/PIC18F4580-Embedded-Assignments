

#include"internal_eeprom.h"
#include"key_press.h"
#include"ssd_display.h"
#include<xc.h>

void init_ssd_display(void)
{
    //data lines initialisation
    
    TRISD = 0x00;
    PORTD = 0x00;
    
    //control lines initialization
    
    TRISA = TRISA & 0xF0;
    PORTA = PORTA & 0xF0;
    
    
}
void display_ssd(unsigned char *ssd)
{
    for(unsigned int i=0;i<4;i++)
    {
        PORTD = ssd[i];
        PORTA = (PORTA & 0xF0) | (1<<i);
        for(int wait=1000;wait--;);
    }
}