#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 *@grid: grid
 *@height: height
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)

	free(grid[i]);

free(grid);


}
