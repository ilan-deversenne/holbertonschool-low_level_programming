#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two string with delimiter for second string
 * @s1: First string
 * @s2: Second string
 * @n: Delimiter for second string
 *
 * Return: Success = Pointer
 * Error = NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	char *base;
	unsigned int i, len;

	len = 0;

	for (i = 0; *(s1 + i) != '\0'; i++)
		len++;

	ptr = malloc(len + n);

	if (ptr == NULL)
		return (NULL);

	base = ptr;

	for (i = 0; i < len; i++)
	{
		*ptr = *(s1 + i);
		ptr++;
	}

	for (i = 0; i < n; i++)
	{
		*ptr = *(s2 + i);
		ptr++;
	}

	return (base);
}
