#include "main.h"
#include <string.h>

/**
 * *_strcat - functionsdf
 *
 * Description: function asdffasdthat can check uppercase char
 *
 * @dest: iasdf
 * @src: input paramasdf
 *
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
