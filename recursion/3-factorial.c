#include "main.h"

/**
 * factorial - Return the factorial of a given number
 * @n: Number
 *
 * Return: Result
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
