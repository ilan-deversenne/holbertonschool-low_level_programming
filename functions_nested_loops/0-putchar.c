#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 *
 * Description: Print _putchar but only with _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char words[8] = {
		95,
		112,
		117,
		116,
		99,
		104,
		97,
		114
	};

	for (i = 0; i < 8; i++)
	{
		_putchar(words[i]);
	}

	/* New line */
	_putchar(10);

	return (0);
}
