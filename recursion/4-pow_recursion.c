#include "main.h"

/**
 * _pow_recursion - Pow of number and exponent
 * @x: Number
 * @y: Exponent
 *
 * Return: Pow number of exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
