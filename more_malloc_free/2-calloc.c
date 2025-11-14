#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory size but with size of bytes
 * @nmemb: Number of parts
 * @size: Bytes size
 *
 * Return: Success = Pointer
 * Error = NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((int *) ptr + i / 4) = 0;

	return (ptr);
}
