#include "main.h"

/**
 * print_alphabet - Print alphabet a-z
 *
 * Return: No return
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar(10);
}
