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

	if (h->len > 0 && h->str != NULL)
	{
		count++;
		printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
		count++;
		printf("[0] (nil)\n");
	}

	if (h->next->len > 0 && h->next->str != NULL)
	{
		count++;
		printf("[%d] %s\n", h->next->len, h->next->str);
	}
	else
	{
		count++;
		printf("[0] (nil)\n");
	}

	return (count);
}
