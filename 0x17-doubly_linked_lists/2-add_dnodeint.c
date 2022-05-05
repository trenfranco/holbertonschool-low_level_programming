#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head
 * @n: node value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *cute;

	if (head == NULL)
		return (NULL);

	cute = malloc(sizeof(dlistint_t));
	if (cute == NULL)
		return (NULL);

	cute->next = *head;
	*head = cute;
	cute->prev = NULL;
	cute->n = n;
	return (cute);
}
