#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the data (n)
 * @head: head the list
 * Return: sum(add) or if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
