#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

void main(void)
{
	int fi = 2;
	int prev_fi = 1; 
	int counter = 1;

	while (counter < 99)
	{
		printf("%d, ", fi);
		fi = fi + prev_fi;
		counter++;
	}
	return(0);
}
