#include <stdio.h>

/**
 * main - Print the program name
 * @argc: Number of elements
 * @argv: Elements
 *
 * Return: Alaways 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
