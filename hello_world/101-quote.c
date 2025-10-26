#include <unistd.h>

/**
 * main - Print a message with esacped " and \n in std err
 *
 * Return: Always 1.
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	write(2, "\n", 1);

	return (1);
}
