#include "main.h"
#include <stdlib.h>

/**
 * free_grid - func
 * @grid: int
 * @height: int
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
