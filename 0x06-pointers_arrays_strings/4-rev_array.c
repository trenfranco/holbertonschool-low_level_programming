#include "main.h"

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i, x, j;

j = n - 1;

for (i = 0 ; i <  n / 2 ; i++)
	{
	x = a[i];
	a[i] = a[j];
	a[j] = x;
	j--;
	}

}
