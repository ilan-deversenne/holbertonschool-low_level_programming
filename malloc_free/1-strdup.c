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
	int i, len;
	char *result = NULL;

	len = 0;

	while (str[len] != '\0')
		len++;

	result = (char *) malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
		result[i] = *(str + i);

	return (result);
}
