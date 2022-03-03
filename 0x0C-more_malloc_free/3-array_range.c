#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an arr of ints
 *@min: int min
 *@max: int max
 * Return: pointer to new arr
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		arr[i] = min + i;
return (arr);
}
