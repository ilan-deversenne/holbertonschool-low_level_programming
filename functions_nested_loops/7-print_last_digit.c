#include "main.h"
#include <stdlib.h>

int print_last_digit(int n)
{
	char c = '0' + (abs(n) % 10);

	_putchar(c);

	return (abs(n) % 10);
}
