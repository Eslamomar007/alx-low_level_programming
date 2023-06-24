#include "main.h"

/**
 * print_line- function
 *
 * @n: int apram
 *
 * Description: function that can print numbers from 0 to 9
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}