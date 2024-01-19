#include "main.h"
#include <string.h>

/**
 * *array_range - make  sadfadsmemory for an array
 * @min: int typesdafsda
 * @max: int typesdfaafsd
 * Return:  return pointesfadfasr to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
