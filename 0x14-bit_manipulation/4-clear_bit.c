#include "main.h"
/**
 * clear_bit - Write a function that clears a bit
 * a bit to 1 at a given index.
 * @n: number
 * @index: index
 * Return: 1 if ok 0 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
