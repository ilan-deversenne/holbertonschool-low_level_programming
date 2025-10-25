#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Print all hours 24h format posibility 00:00 to 23:59
 *
 * Return: No return
 */
void jack_bauer(void)
{
	int i, ii, h, hh, m, mm;

	for (i = 0; i < 24; i++)
	{
		if (i < 10)
		{
			h = 0;
			hh = i;
		}
		else
		{
			h = i / 10;
			hh = i % 10;
		}

		for (ii = 0; ii < 60; ii++)
		{
			if (ii < 10)
			{
				m = 0;
				mm = ii;
			}
			else
			{
				m = ii / 10;
				mm = ii % 10;
			}

			_putchar('0' + h);
			_putchar('0' + hh);

			_putchar(58);

			_putchar('0' + m);
			_putchar('0' + mm);

			_putchar(10);
		}
	}
}
