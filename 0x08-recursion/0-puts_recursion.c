#include "main.h"
#include <string.h>

/**
 * _puts_recursion - update the valueasdf
 *
 *  @s: pointer to he variable
 *
 *  Return:  lenth
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return(putchar("\n"));
	putchar(*s);
	return (_puts_recursion(s++));
}
