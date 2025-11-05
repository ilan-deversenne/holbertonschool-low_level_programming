#include "main.h"

/**
 * _strchr - Locate character in a string
 * @s: String
 * @c: Character to find
 *
 * Return: Pointer start where character are
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;

	return (s);
}
