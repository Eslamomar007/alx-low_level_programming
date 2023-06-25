#include 'main.h'


/**
 * print_triangle- function
 *
 * @size: int apram
 * Description: function that can print numbers from 0 to 9
 */

void print_triangle(int size)
{
	size = 10;
	int i;
	int x;
	int counter = size;
	char ss = ' ';

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			counter -= 1;
			for (i = 0; i < size; i++)
			{
				if (counter <= i)
				{
					_putchar('#');
				}
				else
					_putchar(ss);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
