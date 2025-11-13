#include "main.h"
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		free(grid);
	}
	else
	{

		while (height > 0)
		{
			height--;
			free(grid[height]);
		}

		free(grid);
	}
}
