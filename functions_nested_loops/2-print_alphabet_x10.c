#include <stdio.h>
#include "main.h"

int print_alphabet_x10(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x < 123; x++)
		{
			putchar(x);
		}

		putchar(10);
	}

	return (0);
}
