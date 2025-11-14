#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array with a range
 * @min: Minimum number
 * @max: Maximum number
 *
 * Return: Success = Pointer
 * Error = NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min) * sizeof(int) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
	{
		*(ptr + i) = i;
	}

	return (ptr);
}
