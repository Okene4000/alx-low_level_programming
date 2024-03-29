#include "lists.h"
#include <string.h>

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the head of the list_t list
 * @str: string to be added
 * Return: NULL if function fails
 *         address of new elements if otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *up;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	up = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = up;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
