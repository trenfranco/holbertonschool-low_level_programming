#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: pointer to list
 * Return: counter
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	printf("%i\n", h->n);
	return (count);


}
