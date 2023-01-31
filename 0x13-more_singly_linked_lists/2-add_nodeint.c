#include "lists.h"

/**
 * *add_nodeint - adds a new node at the end of a listint_t list
 * @head: pointer to address of the head of listint_t list
 * @n: integer for the new nodes to contain
 * Return: NULL if function fails
 *         address of the element if otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
