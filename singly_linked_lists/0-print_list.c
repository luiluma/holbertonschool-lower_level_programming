#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
    int count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
		    printf("[0] (nil)\n");
	    else
		    printf("[%i] %s\n", h->len1, h->str);
	    h = h->sig;
	    count++;
    }
    return (count);
}
