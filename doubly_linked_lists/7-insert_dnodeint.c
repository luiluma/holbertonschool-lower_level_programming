#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *old, *new, *previous = NULL;

	old = *h;

	if (h == NULL)
		return (NULL);

	while (idx > 0 && old != NULL)
	{
		previous = old;
		old = old->next;
		idx--;
	}
	if (idx > 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = previous;
	new->next = old;

	if (previous == NULL)
		*h = new;
	else
		previous->next = new;

	if (old != NULL)
		old->prev = new;

	return (new);
}
