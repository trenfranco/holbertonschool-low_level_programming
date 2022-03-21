#include "lists.h"

/**
 * get_nodeint_at_index - get to node
 * @head: head
 * @index: index
 * Return: position of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *find;
	unsigned int i = 0;

	find = head;
	for (i = 0; i <= index; i++)
	{
	find = find->next;
	}
	if (find->next == NULL)
		return (NULL);
	return (find->next);




}
