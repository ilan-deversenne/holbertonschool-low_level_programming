#include <stdio.h>
#include <unistd.h>

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
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	/* New line */
	putchar('\n');

	return (0);
}
