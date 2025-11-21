#include "variadic_functions.h"

/**
 * print_strings - Print string follwed by separator if not nul
 * @separator: Separtor or null
 * @n: Length of ellipsis
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
