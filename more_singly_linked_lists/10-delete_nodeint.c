#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index a linked list
 * @head: head list
 * @index: index of the list where node is deleted
 *
 * Return: 1 if it succeeded -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;
	listint_t *sig;

	p = *head;

	if (index != 0)
	{
		for (; i < index - 1 && p != NULL; i++)
		{
			p = p->sig;
		}
	}

	if (p == NULL || (p->sig == NULL && index != 0))
	{
		return (-1);
	}

	sig = p->sig;

	if (index != 0)
	{
		p->sig = sig->sig;
		free(sig);
	}
	else
	{
		free(p);
		*head = sig;
	}

	return (1);
}
