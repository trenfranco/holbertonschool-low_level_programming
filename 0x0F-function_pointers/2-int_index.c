#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array
 * @size: size of arr
 * @cmp: function that compares values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

		return (-1);


}
