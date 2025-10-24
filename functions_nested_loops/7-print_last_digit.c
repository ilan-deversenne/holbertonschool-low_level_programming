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
	char c = '0' + (_abs(n) % 10);

	_putchar(c);

	return (abs(n) % 10);
}
