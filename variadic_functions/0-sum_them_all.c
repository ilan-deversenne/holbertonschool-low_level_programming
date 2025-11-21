#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Sum of all ellipsis
 * @n: Numbers of element
 *
 * Return: Result or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	va_list sum;
	unsigned int i;

	result = 0;
	if (n == 0)
		return (0);

	va_start(sum, n);
	for (i = 0; i < n; i++)
		result += va_arg(sum, int);

	va_end(sum);

	return (result);
}
