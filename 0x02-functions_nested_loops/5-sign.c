#include "main.h"
/**
*      print_sign - Prints "Programming is ing new line with puts"
*      @n: The character to print
*      Return: Always1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
        {
	       	_putchar('-');
		return (-1);
	}
	_putchar(48);
	return (0);
}
