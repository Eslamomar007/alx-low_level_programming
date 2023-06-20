#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*      print_last_digit - Prints "Programming is ing new line with puts"
*      @n: The character to print
*      Return: Always1
*/

int print_last_digit(int n)
{
	int x;
	if (n < 0)
	{
		n = -n;
	}
	x = n % 10;
	_putchar(x+"0");
	return (x);}
