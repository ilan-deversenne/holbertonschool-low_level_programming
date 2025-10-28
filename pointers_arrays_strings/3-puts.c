#include "main.h"
#include <unistd.h>

/**
 * _puts - Print str by his pointer
 * @str: Pointer of string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		char c = *str;

		write(1, &c, 1);
		str++;
	}

	write(1, "\n", 1);
}
