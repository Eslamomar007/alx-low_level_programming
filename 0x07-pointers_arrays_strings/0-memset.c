#include "main.h"
#include <string.h>

/**
 * _memset - update the value
 * the pointer points to to 98
 *
 *  @*s: pointer to he variable
 *  @b: asdfasdf
 *  @n: asdfasdf
 *  Return:  lenth
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(*s, b, n);
	return (s);
}
