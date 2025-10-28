#include "main.h"

/**
 * swap_int - Swap two int with his pointer
 * @a: Pointer of int 1 to swap
 * @b: Pointer of int 2 to swap
 */
void swap_int(int *a, int *b)
{
	int _a = *a;
	int _b = *b;

	*a = _b;
	*b = _a;
}
