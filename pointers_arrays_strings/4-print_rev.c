#include "main.h"

/**
 * print_rev - Print a string with his pointer but reversed
 * @s: String pointer
 */
void print_rev(char *s)
{
	int i, x;

	i = 0;
	x = 0;

	while (s[x] != '\0')
		x++;

	for (i = x; i >= 0; --i)
	{
		_putchar(s[i]);
	}

	_putchar(10);
}
