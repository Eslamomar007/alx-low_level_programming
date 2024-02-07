#include "lists.h"
/**
 * print_listint - add a new node at the end of `list_t` list
 * @h: double pointer to head
 * Return: Address of the new element or NULL if failed
 */

size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
