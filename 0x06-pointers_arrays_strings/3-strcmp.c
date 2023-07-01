#include "main.h"
#include <string.h>

/**
 * _strcmp - functionsdf
 *
 * Description: function asdffasdthat can check uppercase char
 *
 * @dest: iasdf
 * @src: input paramasdf
 *
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if(s1[a] != s2[a])
		{
			return (s1[a] - s2[a])
		}
	}
	return (0);
}
