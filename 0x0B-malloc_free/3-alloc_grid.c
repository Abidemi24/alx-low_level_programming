#include "main.h"
/**
 *alloc_grid - allocates a grid, make space and free space
 *@width: takes in width of grid
 *@height: height of grid
 *Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (x = x - 1; x >= 0; x--)
			{
				free(grid[x]);
			}
		free(grid);
		return (NULL);
		}
	}
	for (x = 0; y < width; y++)
	grid[x][y] = 0;
	return (grid);
}
