#include "lists.h"
/**
 * print_list - print elements the list
 * @h:  point list to print
 * Return: number node
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
