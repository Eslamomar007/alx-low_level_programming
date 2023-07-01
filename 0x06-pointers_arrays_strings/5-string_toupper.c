#include "main.h"
#include <string.h>

/**
 * tring_toupper -  unctionsd
 * Description: function asdffasdthat can check uppercase char
 * @char: iasdf
 * Return: int a 0
 */
char *string_toupper(char *)
{
	int b;

	for (b = 0; strs[b] != '\0'; b++)
	{
		if (strs[b] >= 'a' && strs[b] <= 'z')
		{
			strs[b] = strs[b] - 32;
		}
	}
	return (strs);
}
