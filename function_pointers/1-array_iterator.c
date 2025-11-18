#include "function_pointers.h"

/**
 * array_iterator - Execute function given with elments of an array
 * @array: Array with elements
 * @size: Size of array
 * @action: Function to call
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(*(array + (int) i));
	}
}
