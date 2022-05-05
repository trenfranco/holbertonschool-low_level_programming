#include "lists.h"

/**
 * sum_dlistint - sums the data of n od d linked list
 * @head: head
 * Return: sum or 0 if emmpty
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (!head)
		return (i);

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
