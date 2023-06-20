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
	int minute1 = 1;
	int minute2 = 0;
	int hour1 = 0;
	int hour2 = 0;

	printf("00:00");
	while (minute1 < 24)
	{
		if (minute2 < 10)
			minute1 = 0;
		if (hour2 < 10)
			hour2 = 0;
		
		
		_putchar(hour2 + '0');
		_putchar(hour1 + '0');
		_putchar(44);
		_putchar(minute2 + '0');
		_putchar(minute1 + '0');
		_putchar('\n');
		minute1 = minute + 1;
	}



}
