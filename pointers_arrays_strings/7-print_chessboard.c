#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_chessboard - Print a chessboard
 * @a: 2d array 8*8
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}

		printf("\n");
	}
}
