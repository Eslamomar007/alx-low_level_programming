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

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
	}
	putchar(10);
	return (0);
}
