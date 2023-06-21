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
	int fi = 0;
	int sec = 0;
	int th = 0;

	if (n > 98)
	{
		for (n = n ; n <= 98; n--)
		{
			th = n % 100;
			sec = ((th * 100) - n) % 10;
			fi = (((th * 100) - n) % 10) - n;
			if (th)
				_putchar(th + '0');
			if (sec + '0')
				_putchar(sec + '0');

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
		for (n = n ; n < 98; n++)
		{
			_putchar(n + '0');
			if (n != i)
			{
				_putchar(44);
				_putchar(' ');
			}							
		}
	}
	_putchar('\n');
}
