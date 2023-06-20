#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fi = 1;
	int prev_fi = 1; 
	int counter = 1;
	int storage = 0; 

	while (counter < 99)
	{
		printf("%d, ", fi);
		storage = fi;
		fi = fi + prev_fi;
		prev_fi = storage;
		counter++;
	}
	return(0);
}
