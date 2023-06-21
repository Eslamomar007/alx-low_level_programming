#include <stdio.h>
#include "main.h"
/**
*      	times_table - prints "Programming is ing new line with puts"
*
*	Return: Always1
*/

void times_table(void)
{
	int i;
	int x;
	for(i = 0; i <= 9; i++)
	{
		for(x = 0; x <= 9; x++)
		{
			int input = x + i;
			_putchar(input + '0');
			_putchar(44);
			_putchar(32);
		}
		_putchar(36);
		_putchar('\n');
	}
}
