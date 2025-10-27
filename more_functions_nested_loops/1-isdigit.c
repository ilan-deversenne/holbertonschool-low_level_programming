#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if is digit
 * @c: Number of char to check
 *
 * Return: 1 if is digit else 2
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
