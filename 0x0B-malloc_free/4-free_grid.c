#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2d arr
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
