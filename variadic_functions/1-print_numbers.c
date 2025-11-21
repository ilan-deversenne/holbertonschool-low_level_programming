#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - Print numbers followed speartor if not nul and by new line
 * @separator: Separator or null
 * @n: Length of ellipsis
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL)
			if (i < n - 1)
				printf("%s", separator);
	}
	printf("\n");
}
