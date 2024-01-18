#include "main.h"

/**
 * string_nconcat - update the valueasdf
 *
 *  @size: asdfasdf
 *  @nmemb: adsf
 *  Return: return pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int count, count1;
	int sign = n;
	int *ptr, *ptr1;

	if (nmemb == 0)
		return NULL;
	if (size == 0)
		return NULL;
	ptr = maloc(nmemb * size);
	ptr1 = ptr;
	if (ptr == NULL)
		return NULL;
	for (count = 0; count < (size * nmemb); count++)
	{
		*ptr = 0;
		ptr++;
	}

	return (ptr1);
}
