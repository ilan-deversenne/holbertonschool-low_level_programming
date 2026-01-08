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
	unsigned int i, len = 0;
	char *result = NULL;

	if (str == NULL)
		return (NULL);

	while (*(str + len) != '\0')
		len++;

	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		result[i] = *(str + i);

	return (result);
}
