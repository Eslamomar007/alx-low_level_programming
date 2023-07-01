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
 *
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	for (; a < n && src[a] != '\0'; a++)
		;
	for (; b < a && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	for (; b < n; b++)
		dest[b] = '\0';
	return (dest);
}
