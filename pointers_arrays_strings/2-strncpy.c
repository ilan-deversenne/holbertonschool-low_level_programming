#include "main.h"

/**
 * _strncpy - Copy string
 * @dest: Destination pointer
 * @src: Source bytes
 * @n: Limiter
 *
 * Return: (dest) Destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *base = dest;

	i = 0;

	while (i < n)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}

		dest++;
		i++;
	}

	return (base);
}
