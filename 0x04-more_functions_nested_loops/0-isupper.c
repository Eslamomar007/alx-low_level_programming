#include <stdio.h>
#include <ctype.h>

/**
*      _isupper - Prints "Programming is ing new line with puts"
*      @c: The character to print
*      Return: Always 1
*/

int _isupper(char c)
{
	if (isupper(c))
		printf("%c: %d",c,isupper(c));
	else
		printf("%c: %d",c,isupper(c));
	return (0);
}
