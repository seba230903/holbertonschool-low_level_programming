#include "main.h"
/**
 * alloc_grid - alloc 2 dimensional grid
 * Description: returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (0);
		}
		for (j = 0; grid[i][j]; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
