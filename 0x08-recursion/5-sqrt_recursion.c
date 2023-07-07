#include "main.h"
#include <string.h>

/**
 *  checker - update the valueasdf
 *
 *  @n: pointer to he variable
 *  @base: asdf
 *  Return:  lenth
 */

int checker(int n, int base)
{
	if (base == n * n)
		return (n);

	if (base < 0)
	{
		return (-1);
	}
	if (base < n * n)
		return (-1);

	return (checker(n + 1, base));
}
/**
 *  _sqrt_recursion - update the valueasdf
 *
 *  @n: pointer to he variable
 *  Return:  lenth
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
