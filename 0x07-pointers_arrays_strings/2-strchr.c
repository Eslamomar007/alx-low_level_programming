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
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == '\0')
		return (s)
	return (NULL);
}
