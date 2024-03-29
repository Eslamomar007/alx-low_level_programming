#include "lists.h"
#include <stdio.h>
/**
 * print_list - hello
 * @h: list of node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			counter++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			counter++;
		}
		h = h->next;
	}
	return (counter);
}
