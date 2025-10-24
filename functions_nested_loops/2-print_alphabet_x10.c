#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: Print x10 alphabet with _putchar
 * Return: Always 0 (Success)
 */
int print_alphabet_x10(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x < 123; x++)
		{
			_putchar(x);
		}

		_putchar(10);
	}

	return (0);
}
