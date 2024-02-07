#include "lists.h"
/**
 * add_nodeint - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @n: value0
 * Return: Address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	new->next = *head;
	*head = new;
	return (*head);
}
