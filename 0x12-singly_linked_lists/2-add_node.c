#include "lists.h"
#include <stdio.h>

/**
 * add_node - hello
 * @head: list of node
 * @str: string 
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n = 0;

	new = malloc(sizeof(list_t));
	
	new->str = strdup(str);

	while (str[n])
		n++;
	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
