#include <stdio.h>
#include "main.h"
/**
*      print_sign - Prints "Programming is ing new line with puts"
*      @n: The character to print
*      Return: Always1
*/

int print_sign(int n)
{
	if (n > 0 )
	{
		_putchar('+');
		_putchar(44);
		_putchar('\n');
		return (1);
	}
  	if (n < 0 )
        {
	       	_putchar('-');
		_putchar(44);
		_putchar('\n');
		return ("-1");
	}
	putchar(48);
	putchar(44);
	putchar('\n');
	return (0);
}
