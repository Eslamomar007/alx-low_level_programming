#include <stdio.h>
#include "main.h"
/**
*      print_to_98 - Prints "Programming is ing new line with puts"
*      @n: The character to print
*      Return: Always1
*/

void print_to_98(int n)
{
	int i = 98;

	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d", n);
			if (n != i)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d", n);
			if (n != i)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	if (n == i)
	{
		printf("%d", n);
	}
	printf("\n");
}
