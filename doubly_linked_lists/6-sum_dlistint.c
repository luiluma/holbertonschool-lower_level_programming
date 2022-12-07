#include "lists.h"
/**
 * sum_dlistint -  function that returns the sum of all the data (n)
 * @head: head the list
 * Return: sum(add) or if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int add = 0;

	if (head == NULL)
		return (0);

	while (tmp)
	{
		add += tmp->n;
		tmp = tmp->next;
	}
	return (add);
}
