#include "main.h"
#include <string.h>

/**
 * _strpbrk- update the valueasdf
 *
 *  @s: pointer to he variable
 *  @accept: asdfasdff
 *
 *  Return:lenth
 */

char *_strpbrk(char *s, char *accept)
{
	while (*accept)
	{
		while (*s)
			if (*s == *accept)
			{
				return (accept);
			}
			else
				s++;
		accept++;
	}
	return (NULL);
}
