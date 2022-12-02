#include "lists.h"
/**
 * insert_nodeint_at_index - fuction
 * @head: double pointer (head - node)
 * @idx: index of the list where the new node should be added
 * @n: the numb
 * Return: address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *p;
	unsigned int count = 0;

	if (temp == NULL && idx != 0)
		return (NULL);

	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	p = malloc(sizeof(listint_t));
	if (p != NULL)
	{
		p->n = n;
		if (idx == 0)
		{
			p->next = *head;
			*head = p;
			return (p);
		}
		if (count + 1 == idx)
		{
			p->next = temp->next;
			temp->next = p;
			return (p);
		}
	}
	return (NULL);
}
