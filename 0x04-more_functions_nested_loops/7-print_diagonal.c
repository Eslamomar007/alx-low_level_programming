#include "main.h"

/**
 * print_diagonal- function
 *
 * @n: int apram
 *
 * Description: function that can print numbers from 0 to 9
 */

void print_diagonal(int n)
{
	int i;
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
