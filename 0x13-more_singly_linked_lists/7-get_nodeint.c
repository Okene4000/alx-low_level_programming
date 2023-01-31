#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * @index: index of nodes to locate
 * Return: NULL if the node does not exist
 *         the located node if otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
