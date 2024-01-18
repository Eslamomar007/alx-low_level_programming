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
	unsigned int b;

	void *ptr = malloc(b);
	if (*ptr)
	{
		return *ptr;
	}
	else
		return 98;
}
