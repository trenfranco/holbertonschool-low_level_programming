#include "lists.h"

/**
 * print_dlistint - Write a function that print
 * s all the elements of a dlistint_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
