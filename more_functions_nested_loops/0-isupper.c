#include "main.h"

/**
 * _isupper - Check if letter is uppercase
 * @n: Number of char to check
 *
 * Return: 1 if is upper else 2
 */
int _isupper(int n)
{
	char c = n;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
