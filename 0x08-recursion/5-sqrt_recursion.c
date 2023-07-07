#include "main.h"
#include <string.h>

/**
 *  checker - update the valueasdf
 *
 *  @n: pointer to he variable
 *  @base: asdf
 *  Return:  lenth
 */

/**
 * _sqrt_recursion - update the valueasdf
 *
 *  @n: pointer to he variable
 *  Return:  lenth
 */

int is_palindrome(char *s)
{	int f = 0;

	while (*s)
	{
		f++;
	}

	return (checker(1, 0, f));
}
int checker(char *s, int i, int f)
{
	if (!s)
		return (0);
	if (f == i || f < i)
		return (0);
	if (s[i] !=s[f])
		return (checker(s*, i + 1, f - 1)
	
	return (1);
}
