#include "lists.h"
/**
 * free_listint - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * Return: Address of the new element or NULL if failed
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
