//including the lib
#include<reg51.h>
#include"delay.h"

//micro define for lcd port to P0
//#define LCD_port P0                           //LCD port is P0
//sfr LCD_port = 0x80;

//sbit declreation
sbit d4 = P1^0;
sbit d5 = P1^1;
sbit d6 = P2^2;
sbit d7 = P3^3;

sbit RS = P2^5;																//Register Select 
sbit RW = P2^6;																//Read/Write 
sbit EN = P2^7;																//ENable select 


//forword decleration 
void init();																	// init() function to activate the LCD
void LCD_cmd(unsigned char);									// LCD_cmd() function to pass cmd to LCD_port
void LCD_data(unsigned char);									// LCD_data() function to pass data to LCD_port
void LCD_string(unsigned char *);							// LCD_string() function to pass string to display data through LCD_data() function
void bit_seprate(unsigned char );


void main()
{
	init();
	while(1)
	{
		LCD_cmd(0x80);
		LCD_string("DIFFERENT CODE");
		LCD_cmd(0xC0);
		LCD_string("ADITYA NIJAVE");
	}
}

// init() function defination
void init()												
{
	
	delay(5);                       // delay
	LCD_cmd(0X02);
	LCD_cmd(0x28);								  // 4 bit data (2 line)
	LCD_cmd(0x0C);									// display on and curser off
	LCD_cmd(0x06);									// entry mode
}

// LCD_cmd() function defination with one argument "cmd"
void LCD_cmd(unsigned char cmd)
{
	
	RS = 0;													//the register select is in active low mode for command
	RW = 0;													//open
	
	bit_seprate(cmd);								//assigning the value of cmd to  LCD_port
	EN = 1;													//creating pluse for EN (high)
	delay(5);												//delay for EN
	EN = 0;													//creating pluse for EN (low)
	delay(5);												//delay for EN
	
	bit_seprate(cmd << 4);					//assigning the value of cmd to  LCD_port   (left shift by 4)
	EN = 1;													//creating pluse for EN (high)
	delay(5);												//delay for EN
	EN = 0;													//creating pluse for EN (low)
	delay(5);												//delay for EN
}

// LCD_data() function defination with one argument "dat"
void LCD_data(unsigned char dat)
{
	RS = 1;													//the register select is in active high mode for data
	RW = 0;													//open
	
	bit_seprate(dat);								//assigning the value of dat to  LCD_port
	EN = 1;													//creating pluse for EN (high)
	delay(5);												//delay for EN
	EN = 0;													//creating pluse for EN (low)
	delay(5);												//delay for EN
	
	bit_seprate(dat << 4);					//assigning the value of dat to  LCD_port	   (left shift by 4)
	EN = 1;													//creating pluse for EN (high)
	delay(5);												//delay for EN
	EN = 0;													//creating pluse for EN (low)
	delay(5);												//delay for EN
}

// LCD_string() function defination with one argument "*string"
void LCD_string(unsigned char *string)
{
	while(*string)
	{
		LCD_data(*string++);
	}
}


//bit_seprate
void bit_seprate(unsigned char bit_value)
{
	d4 = ((bit_value >> 4) & 0x01);
	d5 = ((bit_value >> 5) & 0x01);
	d6 = ((bit_value >> 6) & 0x01);
	d7 = ((bit_value >> 7) & 0x01);
}