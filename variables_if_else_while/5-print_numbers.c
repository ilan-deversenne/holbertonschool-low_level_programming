#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9;)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");

	return (0);
}
