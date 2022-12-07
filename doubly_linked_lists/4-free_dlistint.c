#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: point to head of list
 * Return: o
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
