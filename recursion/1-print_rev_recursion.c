#include "main.h"

/**
 * _print_rev_recursion - Puts but with recursion (reverced)
 * @s: String to puts
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
