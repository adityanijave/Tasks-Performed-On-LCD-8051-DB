#include<reg51.h>
#include"LCD_EightBit_String.h"
#include"delay.h"


void LCD_string(char []);

void main()
{ int i;
	char st1[15]="ADITYA";
	char st2[15]="NIJAVE";
	
	LCD_cmd(0xC0);
	LCD_string("ADITYA");
	
	LCD_cmd(0x80);
	LCD_string("NIJAVE");
}


