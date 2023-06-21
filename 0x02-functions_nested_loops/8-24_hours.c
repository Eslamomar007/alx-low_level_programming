#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*      print_last_digit - Prints "Programming is ing new line with puts"
*      @n: The character to print
*      Return: Always1
*/

void jack_bauer(void)
{
	int minute1 = 0;
	int minute2 = 0;
	int hour1 = 0;
	int hour2 = 0;

	printf("00:00");
	while (hour1 < 2 && hour2 < 4)
	{
		if (hour2 > 9)
		{
			hour2 = 0;
			hour1 = hour1 + 1;
		}
		_putchar(hour1 + '0');
		_putchar(hour2 + '0');
		_putchar(58);
		if (minute2 > 9)
		{
			minute2 = 0;
			minute1 = minute1 + 1;
		}
		if (minute1 == 5 && minute2 == 10)
		{
			minute1 = 0;
			minute2 = 0; 
			hour2 = hour2 + 1;
		}

		_putchar(minute1 + '0');
		_putchar(minute2 + '0');
		
		_putchar('\n');
		minute2 = minute2 + 1;
		hour2 +=1;
	}



}
