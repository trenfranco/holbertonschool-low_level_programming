#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a
 * 2 dimensional array of integers
 *@width: int width
 *@height: int height
 *
 * Return: Pointer to  2Darr.
 */
int **alloc_grid(int width, int height)
{
int i, j, k;
int **p;

if (width <= 0 || height <= 0)
return (NULL);
p = malloc(height * sizeof(int *));
if (p == NULL)
	{
	free(p);
	return (NULL);
	}
i = 0;
k = 0;
for (i = 0; i < height; i++)
	{
	p[i] = malloc(width * sizeof(int));
	if (p[i] == NULL)
	{
	k = 1;
	}
	}
i = 0;
j = 0;
if (k == 1)
	{
	for (i = 0; i < height; i++)
	free(p[i]);
	free(p);
	return (NULL);
	}
for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
		{
		p[i][j] = 0;
		}
	}
return (p);
}
