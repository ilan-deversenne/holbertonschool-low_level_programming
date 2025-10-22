#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print 0-9 without define char
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57;)
	{
		putchar((char) i);
		i++;
	}

	/* New line */
	putchar(10);

	return (0);
}
