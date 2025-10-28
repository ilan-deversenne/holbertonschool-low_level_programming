#include "main.h"

/**
 * print_diagonal - Print diagonal line space '\' * the number given
 * @n: Number of \ (diagonal size)
 *
 * Return: line space + '\' * n
 */
void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
		_putchar(10);

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
				_putchar(32);

			_putchar(92);
			_putchar(10);
		}
}
