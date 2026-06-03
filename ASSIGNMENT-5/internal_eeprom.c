

#include"eeprom_header.h"
#include"key_press.h"
#include"ssd_display.h"
#include<xc.h>

void write_internal_eeprom(unsigned char address, unsigned char data)
{
    EEADR=address;
    
    EEDATA=data;
    
    EEPGD=0;
    
    WREN=1;
    
    GIE=0;
    
    EECON2=0x55;
    
    EECON2=0xAA;
    
    WR=1;
    
    GIE=1;
    
    while(!EEIF);
    
    EEIF=0;
    
    WREN=0;    
}

unsigned char read_internal_eeprom(unsigned char address)
{
    EEADR=address;
    
    EEPGD=0;
    
    CFGS=0;
    
    RD=1;
    
    return EEDATA;
}
