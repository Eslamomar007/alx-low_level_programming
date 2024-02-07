#include "lists.h"
/**
 * pop_listint - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * Return: Address of the new element or NULL if failed
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return(0);
	*head = *head->next;
	return (*head->n);
}
