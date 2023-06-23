#include <stdio.h>
#include "main.h"
/**
*      _isuppper - Prints "Programmafing is ing new line with puts"
*      @c: The character to print
*      Return: Always 
*/

int _isupper(char c)
{
	int x = 0;

	if (c >= 65 && c < 90)
	{
		x = 1;
	}
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(x);
	return (0);
}
