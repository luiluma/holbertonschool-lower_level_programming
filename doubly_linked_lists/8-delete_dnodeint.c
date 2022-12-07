#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 *
 * @head: first node in double linked list
 * @index: node deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

		i = index;
		node = *head;

	while (i > 0 && node != NULL)
	{
		node = node->next;
		i--;
	}
	if (node == NULL)
		return (-1);

	if (node->next != NULL)
		node->next->prev = node->prev;

	if (node->prev != NULL)
		node->prev->next = node->next;

	if (index == 0)
		*head = node->next;

	free(node);
	return (1);
}
