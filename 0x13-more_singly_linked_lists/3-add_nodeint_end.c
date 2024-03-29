#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @n: value0
 * Return: Address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *cur;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	cur = *head;
	if (!(*head))
	{
		*head = new;
		return (*head);
	}

	while (cur->next)
		cur = cur->next;
	cur->next = new;
	return (*head);
}
