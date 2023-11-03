#include "main.h"
#include <string.h>

/**
 * is_prime_number - update the valueasdf
 *
 *  @f: pointer to he variable
 *  Return:  lenth
 */

int is_prime_number(int f)
{
	if (f <= 1)
		return (0);

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
	if (f % base == 0)
		return (1);
	if (f < base)
		return (checker(base + 1, f));
	return (1);
}
