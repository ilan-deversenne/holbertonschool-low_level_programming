#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print [a-z][A-Z]$ only with putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 122; i++)
	{
		char c = i;

		putchar(c);
	}

	for (i = 65; i < 90; i++)
	{
		char c = i;

		putchar(c);
	}

	/* $ */
	putchar(36);

	/* New line */
	putchar(10);

	return (0);
}
