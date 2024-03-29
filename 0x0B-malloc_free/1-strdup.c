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

	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		a[j] = str[j];
	a[i] = '\0';
	return (a);
}
