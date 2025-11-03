#include "main.h"

/**
 * _strncat - Concatenates two strings but with size
 * @dest: Destination pointer
 * @src: New bytes
 * @n: Size
 *
 * Return: (dest) Destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *base = dest;

	i = 0;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (base);
}
