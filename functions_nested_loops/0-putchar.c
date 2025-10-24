#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print _putchar but only with _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char words[8] = {
		95,
		112,
		117,
		116,
		99,
		104,
		97,
		114
	};

	for (i = 0; i < 8; i++)
	{
		_putchar(words[i]);
	}

	/* New line */
	_putchar(10);

	return (0);
}
