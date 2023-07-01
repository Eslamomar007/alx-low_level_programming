#include "main.h"
#include <string.h>

/**
 * reverse_array - functionsd
 * Description: function asdffasdthat can check uppercase char
 * @a: iasdf
 * @n: input paramasdf
 * Return: int a 0
 */
void reverse_array(int *a, int n)
{
	int c = 0;
	int temp;

	while (c < (n / 2))
	{
		temp = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = temp;
		c++;
	}
}
