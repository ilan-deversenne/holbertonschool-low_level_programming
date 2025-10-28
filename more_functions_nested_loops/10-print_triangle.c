#include "main.h"

void print_triangle(int size)
{
	int i, x;

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			if (size - i <= x + 1)
			{
				_putchar('#');
			}
			else
			{
				_putchar(32);
			}
		}

		_putchar(10);
	}

	if (size <= 0)
		_putchar(10);
}
