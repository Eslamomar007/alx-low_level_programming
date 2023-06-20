#include <stdio.h>
#include "main.h"
/**
*      _isalpha - Prints "Programming is ing new line with puts"
*      @c: The character to print
*      Return: Always1
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
