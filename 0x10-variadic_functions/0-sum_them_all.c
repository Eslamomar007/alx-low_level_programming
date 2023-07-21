#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>

/**
 * sum_them_all - update the valueoints to to 98
 *
 *  @n: pointer to he variable
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	int i;

	if (n == 0)
		return 0;
	va_start(args, n);
	for (; i < n; i++)
		sum += va_start(args, int);

	va_end(args);
	return sum;
}
