#include "lists.h"

/**
 * sum_listint - sums all data of the list
 * @head: head
 * Return: sum of all n
 */
int sum_listint(listint_t *head)
{
	listint_t *aux;
	int i = 0;

	if (head == NULL)
		return (0);

	aux = head;
	while (aux->next != NULL)
	{
		i += aux->n;
		aux = aux->next;
	}
	i += aux->n;
	return (i);
}
