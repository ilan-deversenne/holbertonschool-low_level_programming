#include "main.h"
#include <stdio.h>

/**
 * _strlen - Cout str with his pointer
 * @s: Pointer of string to count
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
