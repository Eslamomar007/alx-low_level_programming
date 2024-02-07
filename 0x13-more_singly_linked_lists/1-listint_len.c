#include "lists.h"
/**
 * listint_len - add a new node at the end of `list_t` list
 * @h: double pointer to head
 * Return: Address of the new element or NULL if failed
 */

size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
