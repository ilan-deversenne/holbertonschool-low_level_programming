#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all elements of list_t
 * @h: List (list_t)
 *
 * Return: Number of element (size_t)
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}

	return (count);
}