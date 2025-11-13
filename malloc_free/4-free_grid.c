#include "main.h"
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		free(grid);
		return;
	}
	if (height == 0)
	{
		free(grid[height]);
		free(grid);
		return;
	}

	while (height > 0)
	{
		height--;
		free(grid[height]);
	}

	free(grid);
}
