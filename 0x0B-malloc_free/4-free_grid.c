#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - to free 2 dimentional array
 * @grid: 2 dimentional grid
 * @height: dimension of grid height
 * Description: frees up memory of grid
 * Return: null
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
