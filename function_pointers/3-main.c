#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Length of args
 * @argv: Args
 *
 * Return: Success = 0
 * Error = 1
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*call)(int, int);

	if (argc != 4)
		return (1);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2] == NULL)
		return (1);

	call = get_op_func(argv[2]);
	if (call == NULL)
		return (1);

	result = call(num1, num2);

	printf("%d\n", result);

	return (0);
}
