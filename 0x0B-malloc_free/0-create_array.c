#include "main.h"

/**
 * create_array - update the valueasdf
 *
 *  @size: asdf
 *  @c: asdfasdf
 *
 *  Return: return pointer
 */

char *create_array(unsigned int size, char c);
{
	int *ptr;
	char *cc;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cc = malloc(size * sizeof(*cc));

	if (cc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		cc[i] = c;
	}

	return (cc);
}
