/* 
 * File:   internal_eeprom.h
 * Author: ajjus
 *
 * Created on 8 April, 2026, 12:17 PM
 */

#ifndef INTERNAL_EEPROM_H
#define	INTERNAL_EEPROM_H

void write_internal_eeprom(unsigned char address, unsigned char data);
unsigned char read_internal_eeprom(unsigned char address);
#endif	/* INTERNAL_EEPROM_H */

