//including header file
#include <reg51.h>
#include"LCD_FourBit.h"
#include"delay.h"

//main funcation
void main()
{
	//initization funcation
	init();
	
	//cmd funcation
	LCD_cmd(0x80);
	
	//data funcation
	LCD_data('A');
	LCD_data('D');
	LCD_data('I');
	LCD_data('T');
	LCD_data('Y');
	LCD_data('A');
	
	//cmd funcation
	LCD_cmd(0xC0);
	
	//data funcation
	LCD_data('N');
	LCD_data('I');
	LCD_data('J');
	LCD_data('A');
	LCD_data('V');
	LCD_data('E');
}