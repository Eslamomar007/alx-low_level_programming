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
	unsigned int i;

	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c))
		{
			return (s[i]);
		}
	}

	return (NULL);
}
