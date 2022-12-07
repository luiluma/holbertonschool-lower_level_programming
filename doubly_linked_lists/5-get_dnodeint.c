#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node in a list
 * @head: point the head a list
 * @index: index of the node
 * Return: point the correct node, if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *t = head;
	unsigned int i = 0;

	while (i < index && t)
	{
		t = t->next;
		i++;
	}
	if (!t)
		return (NULL);
	return (t);
}
