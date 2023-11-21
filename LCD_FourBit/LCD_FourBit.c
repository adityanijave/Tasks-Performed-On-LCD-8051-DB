//including delay funcation
#include<reg51.h>
#include"LCD_FourBit.h"
#include"delay.h"

//defination of user defined funcation
void LCD_cmd(unsigned char cmd)							//lcd cmd funcation
{
	
	RS = 0;																		//register select toggle to 0
	RW = 0;																		//read/write toggle to 0
	
	LCD_port = (cmd & 0xF0);									//cmd is anding with 11110000 
	EN = 1;																		//EN = 1
	delay(5);																	//calling delay for pluse
	EN = 0;																		//EN = 0
	delay(5);																	//calling delay for pluse
	
	LCD_port = ((cmd << 4) & 0xF0);
	EN = 1;																		//EN = 1
	delay(5);																	//calling delay for pluse
	EN = 0;																		//EN = 0
	delay(5);																	//calling delay for pluse
}

void LCD_data(unsigned char dat)
{
	
	RS = 1;																		//register select toggle to 1
	RW = 0;																		//read/write toggle to 0
	
	LCD_port = (dat & 0xF0);									//dat is anding with 11110000 
	EN = 1;																		//EN = 1
	delay(5);																	//calling delay for pluse
	EN = 0;																		//EN = 0
	delay(5);																	//calling delay for pluse
		
	LCD_port = ((dat << 4)&0xF0);
	EN = 1;																		//EN = 1
	delay(5);																	//calling delay for pluse
	EN = 0;																		//EN = 0
	delay(5);																	//calling delay for pluse
}

void init()
{
	
	delay(5);																	//calling delay funcation with 5
	LCD_cmd(0x02);
	LCD_cmd(0x28);														//4 bit, 2 rows
	LCD_cmd(0x0C);														//display on cursor off
	LCD_cmd(0x06);														//entry mode
	
}