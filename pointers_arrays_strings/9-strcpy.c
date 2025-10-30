#include "main.h"

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
