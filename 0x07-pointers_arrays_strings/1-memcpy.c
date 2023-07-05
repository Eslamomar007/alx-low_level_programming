#include "main.h"
/**
 * _memcpy - update the valueasdf
 *
 *  @dest: pointer to he variable
 *  @src: asdfasdf
 *  @n: asdfasdf
 *
 *  Return:  lenth
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
