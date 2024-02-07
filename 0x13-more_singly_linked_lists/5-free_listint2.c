#include "lists.h"
/**
 * free_listint2 - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * Return: Address of the new element or NULL if failed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *cur;

	if (head == NULL)
		return;
	cur = *head;
	while (cur != NULL)
	{
		temp = cur;
		cur = cur->next;
		free(temp);
	}
	*head = NULL;
}
