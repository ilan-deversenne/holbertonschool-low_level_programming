#include <stdio.h>

/**
 * _strspn - Count a prefix substring
 * @s: String to count
 * @accept: Accepted characters
 *
 * Return: Length
 */
unsigned int _strspn(char *s, char *accept)
{
	char *base = accept;
	unsigned int count = 0;

	while (*s != '\0')
	{
		accept = base;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				break;
			}

			accept++;
		}

		if (*accept == '\0')
			return (count);

		s++;
	}

	return (count);
}
