#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;
	list_t *new;
	unsigned int len;

	len = 0;
	h = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (*(str + len) != '\0')
		len++;

	if (*head != NULL)
		while (h->next != NULL)
			h = h->next;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
		h->next = new;

	return (new);
}
