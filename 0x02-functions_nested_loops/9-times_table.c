#include <stdio.h>
#include "main.h"
/**
*      _islower - Prints "Programming is ing new line with puts"
*      @c: The character to print
*      Return: Always1
*/

int _islower(int c)
{
	int i; 
	int x; 
	for(i = 0; i <= 9; i++)
	{
		for(x = 0; x <= 9; x++)
		{ 
			int input = x + i;
			_putchar(input);
			_putchar(44);
			_putchar(32);
		}
		_putchar(36);
		_putchar('\n');
	}






}
