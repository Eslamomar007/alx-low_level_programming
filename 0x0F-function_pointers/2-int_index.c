#include "function_pointers.h"

/**
 * int_index - asdfdsar
 * @array: char string
 * @size: asdfadf
 * @cmp: iion pointer that takes a string argument
 *
 * Return: afasdfasdfa
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
