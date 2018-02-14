#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free up memory allocated to grid
 *
 * @grid: grid given
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (height == 0 || grid == NULL)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
