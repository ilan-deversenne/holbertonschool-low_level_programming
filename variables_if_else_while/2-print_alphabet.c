#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alaphabet only with putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		char c = i;

		putchar(c);
	}

	/* New line */
	putchar(10);

	return (0);
}
