#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: array
 * @size: size array
 * @value: value to search
 * Return: number found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int val = -1;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			continue;
		}
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			val = array[i];
			break;
		}
		return (-1);
	}
	return (val);
}
