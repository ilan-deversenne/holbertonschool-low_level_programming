#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create 2d array
 * @width: Width of array
 * @height: Height of array
 *
 * Return: Success = Pointer of array
 * Error = NULL
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(width * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < width; i++)
		array[i] = malloc(height * sizeof(int));

	return (array);
}
