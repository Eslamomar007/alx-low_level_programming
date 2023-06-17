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
	
	while (i <= 59)
	{ 
		if (i == n)
		{
			continue;
		}
		putchar(i);
		putchar(n);
		putchar(44);
		putchar(32);
		if (n == 59)
		{
			i += 1; 
			n = i + 1; 
		}
		n++;
	}
	putchar(10);
	return (0);
}
