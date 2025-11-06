#include "main.h"

/**
 * _strlen_recursion - Return string length but with recursion
 * @s: String
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
