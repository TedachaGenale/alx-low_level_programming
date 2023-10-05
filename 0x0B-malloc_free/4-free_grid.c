#include "main.h"

/**
 * free_grid - Function that frees two dimensional grid
 * @grid: Double pointer to the grid
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != 0 || height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
