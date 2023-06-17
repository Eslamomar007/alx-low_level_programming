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
	int n  = 1;
	int i = 0;
	
	while (i < 9)
	{ 
		if (i == n)
		{
			continue;
		}
		putchar(i);
		putchar(n);
		putchar(44);
		putchar(32);
		if (n == 9)
		{
			i += 1; 
			n = i + 1; 
		}
		n++;
	}
	putchar(10);
	return (0);
}
