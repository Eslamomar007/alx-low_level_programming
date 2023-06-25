#include "main.h"

/**
 * print_triangle- function
 *
 * @size: int apram
 *
 * Description: function that can print numbers from 0 to 9
 */

void print_triangle(int size)
{
	int i;
	int x;
	int counter = size;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			counter -= 1;
			for (i = 0; i < size; i++)
			{
				if (counter <= i) 
				{
					_putchar(35);
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
