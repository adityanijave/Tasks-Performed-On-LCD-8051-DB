//incliding header files
#include<reg51.h>
#include"LCD_EightBit_String.h"
#include"delay.h"

//forward decleration of user defined funcation
//void LCD_string(char []);
void LCD_string(char *);											//proto-type of lcd string funcation with one parameter

//main funcaion
void main()
{
	
	init();																      //calling initi. funcation 
	LCD_cmd(0x80);												      //cmd funcation to forcing cursor to start from 1st row and 1st col
	
	//string funcation that divides each char of string and pass it to data funcation
	LCD_string("Welcome Home");                 //string = "Welcome Home"
	
	LCD_cmd(0xC0);															//cmd funcation to forcing cursor to start from 2nd row and 1st col
	
	//string funcation that divides each char of string and pass it to data funcation
	LCD_string("Aditya A Nijave");        			//string = "Aditya A Nijave"
}



/*void LCD_string(char str[])
{ int i = 0;
	while(str[i] != '\0')
	{
		LCD_data(str[i]);
		i++;
	}
	
}
*/

/*
void LCD_string(char *str)
{
	int i = 0;
	while(*str != '\0')
	{
		LCD_data(*str);
		str++;
	}
}
*/


/**/
//try later (output changes with for loop and while loop)

//funcation defination of user defination
void LCD_string(char str[])											//funcation one parameter
{
	unsigned int i;																//decleration of variables inside the funcation
	for(i = 0; str[i] != '\0'; ++i)								//for loop to itr the char of string
	{
		LCD_data(str[i]);														//lcd data funcation 
		delay(1);																		//calling data funcation with one
	}
}