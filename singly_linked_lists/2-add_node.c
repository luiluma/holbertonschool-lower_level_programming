#include "lists.h"

/**
 * add_node - new node at beginning of list
 * @head: Start pointer of node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *point;
	int i = 0;

	point = malloc(sizeof(list_t));

	if (point == NULL)
		return (NULL);

	point->str = strdup(str);

	for (; str[i]; i++)
	{}

	point->len = i;
	point->next = *head;
	*head = point;

	return (*head);
}
