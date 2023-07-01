#include "main.h"
#include <string.h>

/**
 * cap_string -  unctionsd
 * Description: function asdffasdthat can check uppercase char
 * @strs: iasdf
 * Return: int a 0
 */
char *cap_string(char *strs)
{
	int b;

	for (b = 0; strs[b] != '\0'; b++)
	{
		if (strs[b] >= 'A' && strs[b] <= 'Z')
		{
			strs[b] = strs[b] + 32;
		}
	}
	return (strs);
}
