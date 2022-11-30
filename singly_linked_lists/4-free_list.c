#include "lists.h"
/**
 * free_list - free a list
 *
 * @head: starting point of the list
*/

void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
