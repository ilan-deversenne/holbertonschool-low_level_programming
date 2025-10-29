#include "main.h"
#include <unistd.h>

/**
 * puts2 - Print only 1 of 2 chars
 * @str: Pointer of string to print
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);

		i++;
		str++;
	}

	_putchar(10);
}
