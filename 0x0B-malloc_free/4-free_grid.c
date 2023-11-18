#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * free_grid - frees the grid created by alloc_grid
  * @grid: grid to be freed
  * @height: height of grid
  */
void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
		free(grid[d]);

	free(grid);
}
