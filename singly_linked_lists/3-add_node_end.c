#include "lists.h"
/**
 * add_node_end - new node at beginning of list
 * @head: Start pointer of node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *point, *newp;
	int i = 0;

	point = malloc(sizeof(list_t));

	for (; str[i]; i++)
	{}

	if (point == NULL)
		return (NULL);

	point->str = strdup(str);

	point->len = i;
	point->next = NULL;
	newp = *head;

	if (newp == NULL)
	{
		*head = point;
	}
	else
	{
		while (newp->next != NULL)

			newp = newp->next;
		newp->next = point;
	}

	return (*head);
}
