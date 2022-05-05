#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head
 * @n: node content
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cute = NULL, *temp;

	cute = malloc(sizeof(dlistint_t));
	if (!cute)
		return (NULL);

	temp = *head;
	cute->n = n;
	cute->next = NULL;

	if (*head == NULL)
	{
		cute->prev = NULL;
		*head = cute;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = cute;
		cute->prev = temp;
	}
	return (cute);

}
