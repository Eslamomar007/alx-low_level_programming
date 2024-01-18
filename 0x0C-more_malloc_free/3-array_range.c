#include "notrebloh.h"
#include <stdio.h>
#include <stdlib.h>
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
	for (arr = 0;min <= max; arr++)
	{
		ptr[arr] = max;
		min++;
	}
	return (ptr);
}
