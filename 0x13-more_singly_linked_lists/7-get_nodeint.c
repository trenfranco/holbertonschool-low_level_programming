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

	if (head == NULL)
		return (NULL);

	find = head;

	for (i = 0; i < index && find != NULL; i++)
	{
	find = find->next;
	}
	if (find == NULL)
		return (NULL);
	return (find);




}
