#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print [a-z][A-Z]$ only with putchar function
 * And only 3 calls to putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}

		putchar(c);
	}

	putchar(10);

	return (0);
}
