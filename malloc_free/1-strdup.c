#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate string
 * @str: String to duplicate
 *
 * Return: Pointer of string
 */
char *_strdup(char *str)
{
	unsigned int i = 0, len;
	char *result = NULL;

	while (*(str + len) != '\0')
		len++;

	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		result[i] = *(str + i);

	return (result);
}
