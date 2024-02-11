#include <stdio.h>
/**
 * print_binary - prints decimal as binary
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
	signed long int s;
	char c;
	int f;

	s = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	f = 0;

	while (s >= 0)
	{
		c = (n >> s) & 1;

		if (f == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				f = 1;
			}
		}
	
		s -= 1;
	}
}
