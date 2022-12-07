#include "lists.h"
/**
 * add_dnodeint_end - function hat adds a new node
 *
 * @head: pointer const listint_t
 * @n: const integer
 * Return: prints all the elements of a list_t list.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *point, *t;

	point = malloc(sizeof(dlistint_t));
	if (point == NULL)
		return (NULL);

	t = *head;
	point->n = n;
	point->next = NULL;

	if (*head == NULL)
	{
		point->prev = NULL;
		*head = point;
	}
	else
	{
		while (t->next)
			t = t->next;
		point->prev = t;
		t->next = point;
	}
	return (point);
}
