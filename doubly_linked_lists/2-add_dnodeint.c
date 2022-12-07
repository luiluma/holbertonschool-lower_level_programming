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
	dlistint_t *t;

	point = malloc(sizeof(dlistint_t));
	if (point == NULL || head == NULL)
		return (NULL);

	t = *head;
	point->n = n;

	if (*head == NULL)
		point->next = NULL;
	else
	{
		point->next = t;
		t->prev = point;
	}
	point->prev = NULL;
	*head = point;

	return (point);
}
