#include "lists.h"
#include <stdio.h>
/**
 * print_list - hello
 * @h: list of node
 * return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int counter = 0;
	
	while (h)
	{
			if (!(h->str))
			{
				printf("[0] (nil)");
				counter++;
				continue;
			}
			else
			{
				printf("[%d] %s", h->len, h->str);
				counter++;
			}
			h = h->next;
	}
	return (counter);
}
