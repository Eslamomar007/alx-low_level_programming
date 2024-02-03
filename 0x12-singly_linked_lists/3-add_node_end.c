#include "lists.h"

/**
 * add_node_end - hello
 * @head: list of node
 * @str: string 
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;
	size_t n = 0;
	new = malloc(sizeof(list_t));
	if (!(new))
		return (NULL);
	new->str = strdup(str);
	while (str[n])
		n++;

	new->len = n;
	new->str = strdup(str);
	temp = *head;
	if (head == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
