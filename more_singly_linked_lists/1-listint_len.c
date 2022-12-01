#include "lists.h"

/**
 * list_len - elements in a linked
 *
 * @h: point print to list
 *
 * Return: count
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
        i++;
		h = h->next;
	}
	return (i);
}