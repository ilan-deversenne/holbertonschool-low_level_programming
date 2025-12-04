#include "lists.h"

/**
 * dlistint_len - Count element of list
 * @h: List
 *
 * Return: Size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
