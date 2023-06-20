#include <stdio.h>
#include "main.h"
/**
*      print_alphabet - Prints "Programming is like building new line with puts"
*
*      Return: Always1
*/

void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
