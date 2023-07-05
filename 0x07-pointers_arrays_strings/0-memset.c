#include "main.h"
/**
 * _memset - update the valueasdf
 *
 *  @s: pointer to he variable
 *  @b: asdfasdf
 *  @n: asdfasdf
 *
 *  Return:  lenth
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
