#include "main.h"

/**
 * _strcpy - Copy string pointed to by src to pointed to by dest
 * @dest: Destination of string to copy
 * @src: String to copy
 */
char *_strcpy(char *dest, char *src)
{
	char *first_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	dest++;

	return (first_dest);
}
