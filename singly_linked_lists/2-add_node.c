#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: address of node
 * @str: string to add
 * Return: address of new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *point;
	int i = 0;

	point = malloc(sizeof(list_t));

	point->str = strdup(str);

	if (point == NULL)
		return (NULL);

	for (; str[i]; i++)
	{}

	point->len = i;
	point->next = *head;
	*head = point;

	return (*head);
}
