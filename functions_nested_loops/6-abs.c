#include "main.h"

/**
 * _abs - Convert negative number to positive number
 * @n: Negative number
 *
 * Return: Positive number
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	return (n * -1);
}
