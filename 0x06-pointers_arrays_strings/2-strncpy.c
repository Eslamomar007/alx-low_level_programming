#include "main.h"
#include <string.h>

/**
 * _strncpy - functionsdf
 *
 * Description: function asdffasdthat can check uppercase char
 *
 * @dest: iasdf
 * @src: input paramasdf
 * @n: intasdf
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while(dest[i] != '\n')
	{
		i++;
	}
	for(j = 0; src[j] != '\n'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
