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
		for (n ; n <= 98; n--)
		{
			_putchar(n + '0');
			if (n != i)
			{
				_putchar(44);
				_putchar(' ');
			}
		}
	}
	if (n < 98)
	{
		for (n; n < 98; n++)
		{
			_putchar(n + '0');
			if (n != i)
			{
				_putchar(44);
				_putchar(' ');
			}							
		}
	}
}
