/*
 * i2cclcd.c
 *
 * Created: 2020-02-12 오전 10:16:24
 * Author : gigas
 */ 

#define F_CPU 16000000L
#include <avr/io.h>
#include "clcd.h"

int main(void)
{
	//uart0_init();
	i2c_lcd_init();
	
	char str0[16] = "MuoYa";
	char str1[16] = "JonNaJalDuem :(";
	
	i2c_lcd_string(0, 0, str0);
	i2c_lcd_string(1, 0, str1);
	
	while(1)
	{
		
	}
}
