#include "main.h"

/**
 * print_line - Print lines '_' * the number given
 * @n: Number of _ to line
 *
 * Return: '_' * a
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');

	_putchar(10);
}
