#include "main.h"
/**
 * get_bit - Write a function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res = 0;

	if (index > 64)
		return (-1);
	res = (n >> index) & 1;

	return (res);
}
