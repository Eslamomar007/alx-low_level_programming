#include "main.h"
#include <string.h>

/**
 * _strspn- update the valueasdf
 *
 *  @s: pointer to he variable
 *  @accept: asdfasdff
 *
 *  Return:  lenth
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	while (*s)
	{
		while (*accept)
			if (*s == *accept)
				counter++;
				accept++;
			else
				accept++;
		s++;
	}
	return (counter);
}
