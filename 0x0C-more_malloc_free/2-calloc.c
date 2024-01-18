#include "main.h"

/**
 *  _calloc- update the valueasdf
 *
 *  @size: asdfasdf
 *  @nmemb: adsf
 *  Return: return pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int count;
	int *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = maloc(nmemb * size);
	
	if (ptr == NULL)
		return (NULL);
	for (count = 0; count < (size * nmemb); count++)
	{
		ptr[count] = 0;
	}

	return (ptr);
}
