#include "main.h"
#include <stddef.h>

/**
 * _strstr - Find occurence into string and return his pointer
 * @haystack: String
 * @needle: String to find
 *
 * Return: Pointer of result
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;

	start = haystack;

	while (*haystack != '\0')
	{
		if (*haystack != *needle)
			start = haystack + 1;

		while (*needle != '\0' && *needle == *haystack && *haystack != '\0')
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (start);

		haystack++;
	}

	return (NULL);
}
