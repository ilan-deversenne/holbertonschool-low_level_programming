#include "main.h"

/**
 * more_numbers - Print 10 times 0-14
 */
void more_numbers(void)
{
	int i, n, f, l;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			f = n;

			if (n > 9)
			{
				f = n / 10;
				l = n % 10;
			}

			_putchar('0' + f);

			if (n > 9)
				_putchar('0' + l);
		}

		_putchar(10);
	}
}
