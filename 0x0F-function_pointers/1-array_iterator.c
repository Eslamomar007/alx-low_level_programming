#include "function_pointers.h"
/**
 * array_iterator - asdfdsar
 * @array: char string
 * @size: asdfadf
 * @action: iion pointer that takes a string argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
