#include "main.h"
#include <string.h>

/**
 * string_toupper -  unctionsd
 * Description: function asdffasdthat can check uppercase char
 * @strs: iasdf
 * Return: int a 0
 */
char *string_toupper(char *strs)
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
