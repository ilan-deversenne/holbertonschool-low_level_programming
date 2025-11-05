#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Return first occurence of accept in s
 * @s: String
 * @accept: Accepted chars
 *
 * Return: Pointer of result string
 */
char *_strpbrk(char *s, char *accept)
{
	char *base = accept;

	while (*s != '\0')
	{
		accept = base;

		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}

		s++;
	}

	return (NULL);
}
