#include "main.h"

/**
 * malloc_checked - update the valueasdf
 *
 *  @s1: asdfasdf
 *  @s2: fghjkl
 *  @n: fghjkl
 *  Return: return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count, count1;
	int sign = n;
	char *ptr1;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (sign >= len2)
	{
		sign = len2;
		ptr1 = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr1 = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr1 == NULL)
		return (NULL);
	for (count = 0; count < len1; count++)
	{
		ptr1[count] = s1[count];
	}
	for (count1 = 0; count1 < sign; count1++)
	{
		ptr1[count++] = s2[count1];
	}
	ptr1[count++] = '\0';
	return (ptr1);
}
