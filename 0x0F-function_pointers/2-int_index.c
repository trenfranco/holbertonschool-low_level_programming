#include <stdio.h>
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
	int i, j = 0;

	if (size <= 0)
		return (-1);
	j = 0;
	for (i = 0; i < size; i++)
	{
		if((cmp)(array[i]) != 0)
		{
			j = 1;
			break;
		}
	}
		if (j == 1)
			return (array[i]);
		return (-1);
	

}
