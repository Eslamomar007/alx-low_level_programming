#include "main.h"

/**
 * more_numbers- function
 *
 * Description: function that can print numbers from 0 to 9
 */

void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
