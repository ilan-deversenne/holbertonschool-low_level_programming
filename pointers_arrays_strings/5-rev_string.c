#include "main.h"

/**
 * rev_string - Reverse string with her pointer
 * @s: Pointer of string to reverse
 */
void rev_string(char *s)
{
	char t;
	int a, z;

	a = 0;
	z = 0;

	while (s[z] != '\0')
		z++;
	z--;

	while (a < z)
	{
		t = s[a];
		s[a] = s[z];
		s[z] = t;

		a++;
		z--;
	}
}
