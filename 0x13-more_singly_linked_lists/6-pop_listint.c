#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int i = 0;

	if (head == NULL)
		return (0);

	i = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (i);

}
