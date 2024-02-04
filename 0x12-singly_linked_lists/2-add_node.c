#include "lists.h"
/**
 * add_node - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n = 0;

	new = malloc(sizeof(list_t));

	if (!(new))
		return (NULL);
	new->str = strdup(str);
	while (str[n])
		n++;
	new->len = n;
	new->next = *head;
	*head = new;
	return (*head);
}
