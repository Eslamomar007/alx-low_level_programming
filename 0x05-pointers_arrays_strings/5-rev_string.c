#include "main.h"
#include <string.h>

/**
 * print_rev - update the value
 * the pointer points to to 98
 *
 *  @s: pointer to he variable
 */

void rev_string(char *s)
{
	int c = strlen(s) - 1;

	while (1)
	{
		if (c >= 0)
		{
			_putchar(s[c]);
		}
		else
		{
			break;
		}
		c--;
	}
	_putchar('\n');
}
