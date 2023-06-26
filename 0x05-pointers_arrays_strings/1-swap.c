#include "main.h"

/**
 * swap_int - update the value
 * the pointer points to to 98
 *
 *  @a: pointer to he variable
 *  @b: pointer to var
 */

void swap_int(int *a, int *b)
{
	int **store;

	store = &a;
	a = &b; 
	b = &store;
}
