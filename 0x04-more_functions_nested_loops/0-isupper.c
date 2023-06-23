#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: the int for the paramaters of my function
 * Return: 0
 */
int _isupper(int c)
{
	int c = 0;

	if (c >= 65 && c <= 90)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (0);
}
