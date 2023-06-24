#include "main.h"

/**
 * print_most_numbers- function
 *
 * Description: function that can print numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int i;
	int x = 0;
	for (; x < 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
