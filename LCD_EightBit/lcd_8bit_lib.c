//including header files 
#include <reg51.h>
#include"lcd_8bit.h"
#include"delay_sep.h"

//main funcation
void main()
{
	
	init();																				//initilazation of LCD
	//cmds for LCD
	LCD_CMD(0x80);																//forcing cursor cursor to start from 1st row
	
	//passing char which we want to display on LCD as arugement of funcation and it will take ascii value of char as parameter
	LCD_DATA('A');																// ascii value char 'A' = 65
	LCD_DATA('D');																// ascii value char 'D' = 68
	LCD_DATA('I');																// ascii value char 'I' = 73
	LCD_DATA('T');																// ascii value char 'T' = 84
	LCD_DATA('Y');																// ascii value char 'Y' = 89
	LCD_DATA('A');																// ascii value char 'A' = 97

	//cmds for LCD
	LCD_CMD(0xC0);                                //forcing cursor cursor to start from 2nd row
	
	
	//passing char which we want to display on LCD as arugement of funcation and it will take ascii value of char as parameter
	LCD_DATA('N');																// ascii value char 'N' = 78
	LCD_DATA('I');																// ascii value char 'I' = 73
	LCD_DATA('J');																// ascii value char 'J' = 74
	LCD_DATA('A');																// ascii value char 'A' = 97
	LCD_DATA('V');																// ascii value char 'V' = 86
	LCD_DATA('E');																// ascii value char 'A' = 69
}
