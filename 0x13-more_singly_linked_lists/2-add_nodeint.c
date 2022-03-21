#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint -  adds a new node at the beginning
 * @head: head
 * @n: n
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *begg;

	begg = malloc(sizeof(listint_t));

	if (begg == NULL)
		return (NULL);
	begg->n = n;

	if (*head == NULL)
	{
		*head = begg;
		return (begg);
	}

	begg->next = *head;
	*head = begg;
	return (begg);


}
