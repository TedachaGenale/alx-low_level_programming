#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a matrix of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: Pointer to the grid if success
 * NULL if not success
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (!grid[i])
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;

		}

	}
	return (grid);
}
