#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2d grid
 * @grid: Address of 2D grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
