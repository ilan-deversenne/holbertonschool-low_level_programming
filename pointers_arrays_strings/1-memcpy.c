#include "main.h"

/**
 * _memcpy - Copy memories area
 * @dest: Destination pointer
 * @src: Source
 * @n: Limiter
 *
 * Return: Destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *base = dest;

	while (*dest != '\0' && i < (int)n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (base);
}
