#include "main.h"

void puts_half(char *str)
{
	int a, z;

	a = 0;
	z = 0;

	while (str[z] != '\0')
		z++;
	z--;

	for (; a <= z; a++)
		if (z % 2 == 1)
		{
			if (a > z / 2)
				_putchar(str[a]);
		}
		else
		{
			_putchar(str[(z + 1) / 2]);
		}

	_putchar(10);
}
