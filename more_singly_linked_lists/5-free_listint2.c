#include "lists.h"

/**
 * free_listint2 - free list
 * @head: double point the head of list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head)
	{
		while (*head)
		{
			p = *head;
			*head = p->next;
			free(p);
		}
	}
}
