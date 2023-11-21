//INCLUDING HEADER FILE
#include"delay.h"

//FUNCATION DEFINATION OF USER DEFINED FUNCATION
void delay(unsigned int time)												//DELAY FUNCATION WITH PARAMETER
{
	unsigned int i , j;																//DECLERATION OF VARIABLES INSIDE FUNCATION
	for(i=0; i < time; i++)														//FOR LOOP WILL ITR ITSELF TILL PARAMETER
	{for(j = 0; j < 1000; j++);}											//NESTED FOR LOOP WILL ITR ITSELF TILL 1000 COUNT
}