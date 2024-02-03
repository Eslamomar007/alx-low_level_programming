#include "lists.h"
#include <stdio.h>

/**
 * list_len - hello
 * @h: list of node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;
	
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
