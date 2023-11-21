//including header file
#include <reg51.h>

//sfr decleration
sfr LED_port = 0xA0;

//sbit decleration
sbit RS = P1^0;														//register select
sbit RW = P1^1;														//read/write mode
sbit EN = P1^2;														//enable mode


//forward decleration of user defined funcation
void LCD_CMD(unsigned char);							//proto-type of lcd cmd funcation
void LCD_DATA(unsigned char);							//proto-type of lcd data funcation
void init();							                //proto-type of lcd initize funcation
