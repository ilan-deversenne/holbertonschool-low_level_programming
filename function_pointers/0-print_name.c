#include "function_pointers.h"

/**
 * print_name - Call function given has f with name has arg
 * @name: Name to give
 * @f: Function to call
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
