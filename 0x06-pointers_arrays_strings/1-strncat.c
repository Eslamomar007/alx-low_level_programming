#include "main.h"
#include <string.h>

/**
 * *_strncat - functionsdf
 *
 * Description: function asdffasdthat can check uppercase char
 *
 * @dest: iasdf
 * @src: input paramasdf
 * @n: intasdf
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
