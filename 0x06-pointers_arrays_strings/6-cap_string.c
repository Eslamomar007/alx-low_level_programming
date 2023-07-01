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
	int i, j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(strs + i) != '\0')
	{
		if (*(strs + i) >= 'a' && *(strs + i) <= 'z')
		{
			if (i == 0)
			{
				*(strs + i) = *(strs + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(strs + i - 1))
					{
						*(strs + i) = *(strs + i) - 32;
					}
				}
			}
		}
		i++;
	}
	return (strs);
}
