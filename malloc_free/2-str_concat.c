#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two string
 * @s1: First string
 * @s2: Last string
 *
 * Return: Pointer of concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *result = NULL;

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = (char *) malloc((len1 + len2) * sizeof(char));

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];

	return (result);
}
