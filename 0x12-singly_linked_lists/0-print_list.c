#include "lists.h"
#include <stdio.h>
/**
 * print_list - hello
 * h - list of node
 * return - number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int counter = 0;
	const list_t *node = h;

	while ((node)->next)
	{
			if (!(node->str))
			{	
				printf("[0] (nil)");
				counter++;
				continue;
			}
			else
			{
				printf("[%d] %s", (node)->len, (node)->str);
				counter++;
				(node) = (node)->next;
			}
	}
	return (counter);
}
