#include "lists.h"
/**
 * dlistint_len - elements in a linked
 *
 * @h: point print to list
 * Return: i
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
