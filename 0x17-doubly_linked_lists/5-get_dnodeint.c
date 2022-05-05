#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: head pointer
 * @index: idx
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
