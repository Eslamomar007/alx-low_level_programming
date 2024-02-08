#include "lists.h"
/**
 * sum_listint - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * Return: Address of the new element or NULL if failed
 */

int sum_listint(listint_t *head);
{
	int i;

	i = 0;
	while (head->index)
	{
		i += head->n;
		head = head->next;
	}
	return (head);

}
