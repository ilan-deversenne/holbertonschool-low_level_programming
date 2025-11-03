#include "main.h"

/**
 * _memset - Fills memory with a constant bytes
 * @s: Pointer address of element to fill
 * @b: New byte
 * @n: Size of elements
 * Return: Pointer address
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *base = s;

	for (i = 0; i < (int)n; i++)
	{
		*s = b;
		s++;
	}

	return (base);
}
