#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print 0-9 with space and comma (only putchar)
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	for (character = 48; character <= 57; character++)
	{
		putchar(character);

		if (character < 57)
		{
			/* , */
			putchar(44);

			/* Space */
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
