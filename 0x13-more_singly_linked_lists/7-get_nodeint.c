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
	if (head == NULL || !index)
		return (NULL);
	while (temp->next && i < index)
	{
		i++;
		temp = temp->next;
	}	
	if (i < (index -1))
		return (*temp);
			
	return (NULL);
}
