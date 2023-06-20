#include <stdio.h>
#include "main.h"
/**
*      print_alphabet - Prints "Programming is li building new line with puts"
*
*      Return: Always1
*/

void print_alphabet_x10(void)
{
	int i = 97;
	int n = 10;
	for ( n = 0; n < 10; n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
