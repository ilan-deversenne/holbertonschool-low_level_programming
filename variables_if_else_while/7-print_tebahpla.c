#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print z-a
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	/* New line */
	putchar(10);

	return (0);
}
