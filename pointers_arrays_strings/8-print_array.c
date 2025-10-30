#include "main.h"
#include <stdio.h>

/**
 * print_array - Print content of a array
 * @a: Pointer of array
 * @n: Nomber of element to display
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
