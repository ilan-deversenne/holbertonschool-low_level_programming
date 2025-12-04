#include "lists.h"

/**
 * free_list - Free a list
 * @head: List
 */
void free_list(list_t *head)
{
	list_t *h;

	h = head;

	while (head != NULL)
	{
		h = head;
		head = h->next;

		free(h);
	}
}
