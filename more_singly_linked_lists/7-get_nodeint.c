#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node
 * @head: point
 * @index: index is the index of the node
 * Return: NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (; count < index && head != NULL; count++)
	{
		head = head->next;
	}
	return (head);
}
