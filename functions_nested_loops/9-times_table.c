#include "main.h"

/**
 * times_table - Print 0,9 * 0,9
 *
 * Return: No return
 */
void times_table(void)
{
	int x, i, r, first, last;

	for (x = 0; x <= 9; x++)
	{
		for (i = 0; i <= 9; i++)
		{
			r = i * x;

			if (r > 9)
			{
				first = r / 10;
				last = r % 10;

				_putchar('0' + first);
				_putchar('0' + last);
			}
			else
			{
				_putchar('0' + r);
			}

			if (i < 9)
			{
				_putchar(',');
				_putchar(32);

				if ((i + 1) * x <= 9)
				{
					_putchar(32);
				}
			}
		}

		_putchar(10);
	}
}
