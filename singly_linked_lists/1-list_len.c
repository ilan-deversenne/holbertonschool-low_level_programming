#include "lists.h"

/**
 * list_len - Count list element
 * @h: List
 *
 * Return: Length of list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
