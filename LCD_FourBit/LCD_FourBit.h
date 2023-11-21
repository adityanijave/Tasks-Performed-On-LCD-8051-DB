//including header file
#include<reg51.h>

//sfr decleration
sfr LCD_port = 0xA0;

//sbit decleration
sbit RS = P1^0;
sbit RW = P1^1;
sbit EN = P1^2;

//forward decleration of user defined funcation
void init();																			//proto-type of init funcation
void LCD_cmd(unsigned char);											//proto-type of lcd cmd funcation
void LCD_data(unsigned char);											//proto-type of lcd data funcation