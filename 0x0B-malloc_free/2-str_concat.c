#include "main.h"

/**
 *  str_concat - update the valueasdf
 *
 *  @s1: asdf
 *  @s2
 *
 *  Return: return pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *a, *ret;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;
	while (s1[j])
		i++;
	j = 0;
	while (s2[j])
		i++;

	ret = malloc(sizeof(char) * (i + 1));
	if (ret == NULL)
		return (NULL);
	a = ret;
	while (*s1)
		*a++ = *s1++;
	while (*s2)
		*a++ = *s2++;

	*a = '\0';
	return (ret);
}
