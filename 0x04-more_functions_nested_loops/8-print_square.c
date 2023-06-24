#include "main.h"

/**
 * print_square- function
 *
 * @size: int apram
 *
 * Description: function that can print numbers from 0 to 9
 */

void print_square(int size)
{
	int i;
	int x;

	if (n > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
