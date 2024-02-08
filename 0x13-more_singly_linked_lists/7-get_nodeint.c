#include "lists.h"
/**
 * get_nodeint_at_index - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @index: asdf
 * Return: Address of the new element or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *temp;

	temp = head;
	if (head == NULL || index < 0)
		return (NULL);
	if (index == 0)
		return (head);
	while (temp->next)
	{
		i++;
		temp = temp->next;
	}
	if (i < index)
		return (NULL);

	i = 0;
	while (head->next)
	{
		if (i == index)
			return (head);
		head = head->next;
		i--;
	}

	return (NULL);
}
