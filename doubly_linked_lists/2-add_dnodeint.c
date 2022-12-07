#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning
 * @head: Start pointer of node
 * @n: add the node number int
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *point;

	point = malloc(sizeof(dlistint_t));
	if (point == NULL)
		return (NULL);

	point->n = n;
	point->next = *head;
	*head = point;

	return (point);
}
