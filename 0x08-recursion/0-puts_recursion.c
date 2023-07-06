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
		return(_puts('\n'));
	_puts(*s);
	return (_puts_recursion(s++));
}
