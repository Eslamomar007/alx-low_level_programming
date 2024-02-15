#include "main.h"
#include <string.h>

/**
 * rev_string - update the value
 * the pointer points to to 98
 *
 * @s: pointer to he variable
 */

void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	int mid;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	mid = i / 2;
	i--;
	while (1)
	{
		if (i > mid)
		{
			temp = s[c];
			s[c] = s[i];
			s[i] = temp;
		}
		else
		{
			break;
		}
		i--;
		c++;
	}
}
