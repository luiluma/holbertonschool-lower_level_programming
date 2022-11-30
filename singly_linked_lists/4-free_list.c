#include "lists.h"
/**
 * free_list - free a list
 * 
 * @head: starting point of the list
 * Return: 0
*/

void free_list(list_t *head)
{
    list_t *aux;

	if (head != NULL)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}