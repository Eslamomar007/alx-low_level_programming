#include "lists.h"


int mian(void)
{
	 list_t *head;
	     list_t *new;
	         list_t hello = {"World", 5, NULL};
		     size_t n;

		         head = &hello;
			     new = malloc(sizeof(list_t));
			         if (new == NULL)
					     {
						             printf("Error\n");
							             return (1);
								         }
