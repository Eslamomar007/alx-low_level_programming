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
	int n  = 49;
	int i = 48;
	int looping = 0;
	while (i < 58)
	{
		putchar(i);
		putchar(n);
		putchar(32);
		if (n == 57)
		{
			i += 1;
			n = i;
			looping += 1;
		}
		if (looping == 9)
		{
			break;
		}
		if (looping != 9)
		{
			putchar(44);
		}
		n++;
	}
	putchar(10);
	return (0);
}
