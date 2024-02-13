#include "main.h"

/**
 *  _strdup - update the valueasdf
 *
 *  @str: asdf
 *
 *  Return: return pointer
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i])
		i++;

	a = malloc(i * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (j = 0; str, j < i; j++)
		str[j] = a[j];

	return (a);
}
