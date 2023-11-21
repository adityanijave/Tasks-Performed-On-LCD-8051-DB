//including header file
#include <reg51.h>
#include"lcd_8bit.h"
#include"delay_sep.h"

//defination of user defined funcations 
void LCD_CMD(unsigned char cmd)										//cmd funcation of LCD having cmd as aurgement
{
	LED_port = cmd;																	//cmd is assgin LED port 
	RS = 0;																					//register select is zero for cmd
	RW = 0;																					//read/write is zero
	EN = 1;																					//enable = 1
	delay(5);																				//calling delay funcation with 5 for pluse genration
	EN = 0;																					//enable = 0
	delay(5);																				//calling delay funcation with 5 for pluse genration
}

void LCD_DATA(unsigned char datas)								//data funcation of LCD having data as aurgement
{
	LED_port = datas;																//data is assgin LED port 
	RS = 1;																					//register select is one for data
	RW = 0;																					//read/write is zero
	EN = 1;																					//enable = 1
	delay(5);																				//calling delay funcation with 5 for pluse genration
	EN = 0;																					//enable = 0
	delay(5);																				//calling delay funcation with 5 for pluse genration
}

void init()																				//initi funcation to initize the LCD
{
	delay(5);																				//calling delay funcation with 5
	LCD_CMD(0x38);																	//8bit, 2row
	LCD_CMD(0x0C);																	//display on, cursor off
	LCD_CMD(0x06);                                  //entry mode
	//LCD_CMD(0x01);
}
