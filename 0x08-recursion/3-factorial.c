#include "main.h"
#include <string.h>

/**
 * factorial - update the valueasdf
 *
 *  @n: pointer to he variable
 *
 *  Return:  lenth
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 )
		return (1);

	return (1 * factorial(n - 1));
}
