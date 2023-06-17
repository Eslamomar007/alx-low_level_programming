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
	
	while (i < 58)
	{ 
		putchar(i);
		putchar(n);
		putchar(44);
		putchar(32);
		if (n == 57)
		{
			i += 1; 
			n = i; 
		}
		if (i == 58)
		{
			break;
		}
		n++;
	}
	putchar(10);
	return (0);
}
