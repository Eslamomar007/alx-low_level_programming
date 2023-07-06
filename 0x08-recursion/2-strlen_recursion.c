#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - update the valueasdf
 *
 *  @s: pointer to he variable
 *
 *  Return:  lenth
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
