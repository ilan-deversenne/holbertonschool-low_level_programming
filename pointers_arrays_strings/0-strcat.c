#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer of dest string (First string to concatenates)
 * @src: Source (Second string to concatenates)
 * Return: Dest pointer
 */
char *_strcat(char *dest, char *src)
{
	char *base = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (base);
}
