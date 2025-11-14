#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Like to malloc but with fail check
 * @b: Size
 *
 * Return: Success = Pointer
 * Error = 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		int _err = 98;
		void *err = &_err;

		return (err);
	}

	return (ptr);
}
