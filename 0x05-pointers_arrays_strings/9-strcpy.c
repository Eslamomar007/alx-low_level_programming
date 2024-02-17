#include "main.h"
#include <string.h>

/**
 * _strcpy - update the value
 * the pointer points to to 98
 *
 * @dest: asdf
 * @src: pointer to he variable
 * return: asdfadsff
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = ('\0');
	return (dest);
}
