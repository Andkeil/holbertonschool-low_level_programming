#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - return pointer to 2D array of ints
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to int array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			j = i - 1;
			break;
		}
	}
	if (j > 0)
	{
		for (j = i - 1; j >= 0; j--)
			free(grid[j]);
		free(grid);
		return (NULL);
	}
	return (grid);
}
