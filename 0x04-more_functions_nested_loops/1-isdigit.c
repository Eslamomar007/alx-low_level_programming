#include <stdio.h>
/**
*      _isuppper - Prints "Programmafing is ing new line with puts"
*      @c: The character to print
*      Return: Always 
*/

int _isupper(char c)
{
	if (isupper(c))
	{
		printf("%c: %d", c, 1);
	}
	else
	{
		printf("%c: %d", c, 0);
	}

	return (0);
}
