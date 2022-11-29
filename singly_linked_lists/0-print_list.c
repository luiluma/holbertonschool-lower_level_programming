#include "lists.h"
/**
 * print_list - print elements the list
 * @h: list to print
 * Return: number node
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
	}
}