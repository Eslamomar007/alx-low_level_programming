#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - update the valueasdf
 *
 *  @s: pointer to he variable
 *
 *  Return:  lenth
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
}
