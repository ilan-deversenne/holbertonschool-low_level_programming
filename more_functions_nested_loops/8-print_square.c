#include "main.h"

/**
 * print_square - Print square with '#' with given size
 * @size: Size of square
 */
void print_square(int size)
{
	int i, x;

	if (size <= 0)
		_putchar(10);

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar(10);
	}
}
