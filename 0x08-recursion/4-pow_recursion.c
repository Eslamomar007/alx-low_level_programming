#include "main.h"
#include <string.h>

/**
 *  _pow_recursion - update the valueasdf
 *
 *  @x: pointer to he variable
 *  @y: adsfadsf
 *  Return:  lenth
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
