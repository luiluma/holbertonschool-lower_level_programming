#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning
 * @head: Start pointer of node
 * @n: add the node number int
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *point;

	point = malloc(sizeof(listint_t));
	if (point == NULL)
		return (NULL);

	point->n = n;
	point->next = *head;
	*head = point;

	return (*point);
}
