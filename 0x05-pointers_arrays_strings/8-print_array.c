#include "main.h"
#include <string.h>

/**
 * print_array - update the value
 * the pointer points to to 98
 *
 *  @a: pointer
 *  @s: pointer to he variable
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (1)
	{
		if (i < n)
		{
			printf("%d, ", a[i]);
		}
		else
		{	
			printf("%d ", a[i]);
			break;
		}
		i++;
	}
}