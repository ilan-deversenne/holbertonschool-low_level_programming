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
	int **array = malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		array[i] = malloc(height * sizeof(int));

	return (array);
}
