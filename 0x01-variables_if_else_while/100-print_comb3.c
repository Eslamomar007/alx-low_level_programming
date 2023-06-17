#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*      main - Prints "Programming is like building new line with puts"
*
*      Return: Always1
*/

int main(void)
{
	int n;
	int i;
	for (n = 48; n < 57; n++)
	{
		for (i = 49; i <= 57; n++)
		{
			putchar(n);
			putchar(i);
			if (i == 57)
			putchar(44);			
		}
	}
	putchar(10);
	return (0);
}
