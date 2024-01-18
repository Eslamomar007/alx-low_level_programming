#include "main.h"

/**
 * malloc_checked - update the valueasdf
 *
 *  @b: asdfasdf
 *
 *  Return: return pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	
	return (ptr);
}
