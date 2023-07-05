#include "main.h"
#include <string.h>

/**
 * _strchr - update the valueasdf
 *
 *  @s: pointer to he variable
 *  @c: asdfasdff
 *
 *  Return:  lenth
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	for (i; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return (NULL);
}
