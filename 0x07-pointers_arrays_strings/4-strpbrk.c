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
	int counter = 0;

	while (*s)
	{
		while (*accept)
			if (*s == *accept)
			{
				return (s);
			}
			else
				accept++;
		s++;
	}
	return (NULL);
}
