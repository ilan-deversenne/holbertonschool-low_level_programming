#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Print and return last digit of a int
 * @n: Number
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	char c = '0' + (n % 10);
	if (n < 0)
	{
		c = '0' + ((n % 10) * -1);
	}

	_putchar(c);

	if (n < 0)
	{
		return ((n % 10) * - 1);
	}
	return (n % 10);
}
