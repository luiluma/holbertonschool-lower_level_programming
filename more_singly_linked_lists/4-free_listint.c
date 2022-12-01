#include "lists.h"
/**
 * free_listint - free a list
 * @head: head the list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
