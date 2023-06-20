#include <stdio.h>
#include "main.h"
/**
*      _islower - Prints "Programming is ing new line with puts"
*
*      Return: Always1
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
