//including header file
#include"delay.h"


//defination of user defined funcation
void delay(unsigned int time)										//delay funcation with one parameter
{
	unsigned int i,j;															//decleration of variables inside funcation
	for(i = 0; i < time; i++)											//for loop will itr itself till parameter
	{for(j = 0; j < 1000; j++);}									//nested for loop which is itr itself till upperlimit
}