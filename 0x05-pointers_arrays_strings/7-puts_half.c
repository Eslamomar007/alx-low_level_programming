#include "main.h"
#include <string.h>

/**
 * puts_half - update the value
 * the pointer points to to 98
 *
 * @str: pointer to he variable
 */

void puts_half(char *str)
{
	int i = 0;
	int mid;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		mid = (i - 1) / 2;
	}
	else
		mid = i / 2;
	while (1)
	{
		if (i >= mid)
		{
			_putchar(str[mid]);
		}
		else
		{
			break;
		}
		i++;
	}
}
