#include "main.h"

/**
 * puts_half - Print half of an str
 * @str: Pointer of string to print
 */
void puts_half(char *str)
{
	int a, z;

	a = 0;
	z = 0;

	while (str[z] != '\0')
		z++;
	z--;

	for (; a <= z; a++)
	{
		if (z % 2 == 0)
			if (a > z + 1 / 2)
			{
				_putchar(str[a]);
				continue;
			}

		if (a > z / 2)
			_putchar(str[a]);

	}

	_putchar(10);
}
