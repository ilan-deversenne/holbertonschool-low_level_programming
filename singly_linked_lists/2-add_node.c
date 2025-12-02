#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - Add string to the node
 * @head: Node
 * @str: String to add
 *
 * Return: New node
 */
list_t *add_node(list_t **head, const char *str)
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

	new->str = strdup(str);
	new->len = len;
	new->next = h;

	*head = new;

	return (*head);
}
