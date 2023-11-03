#include "main.h"
#include <string.h>

/**
 * _sqrt_recursion - update the valueasdf
 *
 *  @f: pointer to he variable
 *  Return:  lenth
 */

int _sqrt_recursion(int f)
{
	if (f <= 0)
		return (-1);

	return (checker(1, f));
}

/**
 *  checker - update the valueasdf
 *
 *  @base: pointer to he variable
 *  @f: asdf
 *  Return:  lenth
 */

int checker(int base, int f)
{
	if (f == base  * base)
		return (base);
	if (f < base * base)
		return (-1);
	if (f > base * base)
		return (checker(base + 1, f));
	return (1);
}
