#include <stdio.h>

/**
 * main - Entry point - Print numbers 1 to 100
 * but replace number divisible by 3 and 5 to Fizz
 * and number divisible by 5 to Buzz
 * and number divisible by 3 to Fizz
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
