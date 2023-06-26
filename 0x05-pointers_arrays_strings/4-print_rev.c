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
	char str;

	str = strev(s);
	puts(str);
	puts('\n');
}
