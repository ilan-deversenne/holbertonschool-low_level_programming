#include "function_pointers.h"

/**
 * int_index - Search int on an array
 * @array: Array
 * @size: Size of array
 * @cmp: Int to search
 *
 * Return: Index of first occurence
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, check;

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		check = (*cmp)(array[index]);
		if (check != 0)
			return (index);
	}

	return (-1);
}
