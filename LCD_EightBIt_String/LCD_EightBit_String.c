//including header file
#include<reg51.h>
#include"LCD_EightBit_String.h"
#include"delay.h"

//funcation defination of user defined funcation
void LCD_cmd(unsigned char cmd)										//lcd cmd funcation with one parameter
{
	LCD_port = cmd;																	//cmd is assign to lcd port
	RS = 0;																					//register select is toggle to 0
	RW = 0;																					//read/write is toggle to 0
	EN = 1;																					//EN = 1
	delay(5);																				//calling delay funcation to generate pluse
	EN = 0;																					//EN = 0
	delay(5);																				//calling delay funcation to generate pluse
}

void LCD_data(unsigned char dat)
{
	
	LCD_port = dat;																//dat is assign to lcd port
	RS = 1;																				//register select is toggle to 1
	RW = 0;																				//read/write is toggle to 0
	EN = 1;																				//EN = 1
	delay(5);																			//calling delay funcation to generate pluse
	EN = 0;																				//EN = 0
	delay(5);																			//calling delay funcation to generate pluse
}

void init()
{
	
	delay(5);																			//calling delay funcation with 5
	LCD_cmd(0x38);																//8bit, 2 rows
	LCD_cmd(0x0C);																//display on, cursor off
	LCD_cmd(0x06);																//entry mode
}