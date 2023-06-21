#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*     jack_bauer - Prints "Programming is ing new line with puts"
*      
*      Return: Always1
*/

void jack_bauer(void)
{
	int minute1 = 0;
	int minute2 = 0;
	int hour1 = 0;
	int hour2 = 0;
	for (hour1 = 0 ; hour1 <=2; hour1++)
	{
		for (hour2 = 0; hour2 <= 9; hour2++)
		{
			for (minute1 = 0; minute1 <=5; minute1++)
			{
				for (minute2 = 0 ; minute2 <= 9; minute2++) 
				{
		        
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(58);
					_putchar(minute1 + '0');
					_putchar(minute2 + '0');
					_putchar('\n');
				}
			}
	
			if (hour2 == 3 && hour1 ==2)
				break;
		}
		if (hour2 == 3 && hour1 == 2)
			break;	
	}
}
