#include "main.h"

/**
 * _isalpha - Check if is alpha (lowercase and uppercase)
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
