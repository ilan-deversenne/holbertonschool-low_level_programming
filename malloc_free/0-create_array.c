#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create array (alloc and set)
 * @size: Size of array
 * @c: Character to set
 *
 * Return: Array pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *result = NULL;

	if (size == 0)
		return (NULL);

	result = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		result[i] = c;
	}

	return (result);
}
