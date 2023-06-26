#include "main.h"
#include <string.h>

/**
 * print_rev - update the value
 * the pointer points to to 98
 *
 *  @s: pointer to he variable
 */

void print_rev(char *s)
{
	int c = strlen(s);

	while(1)
	{
		if (c >= 0 )
		{
			puts(s[c]);
		}
		else
		{
			break;
		}
		c--;
	}
	
		puts("\n");
}
