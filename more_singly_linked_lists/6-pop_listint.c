#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head node the list
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int dat = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	dat = temp->n;
	*head = temp->next;

	free(temp);
	return (dat);
}
