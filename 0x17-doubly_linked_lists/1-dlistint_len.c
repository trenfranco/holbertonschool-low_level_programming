#include "lists.h"

/**
 * dlistint_len - get size of a list
 * @h: head
 * Return:  number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
