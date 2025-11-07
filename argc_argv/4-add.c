#include <stdio.h>
#include <stdlib.h>

/**
 * main - Aggregate 2 numbers given has argument
 * @argc: Numbers of arguments
 * @argv: Arguments
 *
 * Return: 0 = Success
 * 1 = Error
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));

	return (0);
}

/*
 * Heyy
 * Have good day :)
 *
 * Yes I copy paste and edited my last code lol
 */
