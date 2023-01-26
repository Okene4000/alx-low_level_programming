#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: point to head of the list_t list
 * @str: string to be added
 * Return: NULL if the function fails
 *         address of new element if otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *up;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	up = strdup(str);
	if (up == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = up;
	new->len = len;
	new->next = *head;


	*head = new;

	return (new);
}

