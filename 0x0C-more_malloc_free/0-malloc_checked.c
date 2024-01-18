#include "main.h"
/**
 * malloc_checked - update the valueasdf
 *
 *  @b: asdfasdf
 *
 *  Return:  lenth
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (*ptr)
	{
		return ptr;
	}
	else
		exit(98);
}
