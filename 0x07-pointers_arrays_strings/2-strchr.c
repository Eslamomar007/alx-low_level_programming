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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
