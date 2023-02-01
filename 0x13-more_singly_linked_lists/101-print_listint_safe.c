#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - count the number of unique nodes in a looped
 *                      listint_t linked list
 * @head: pointer to the head of the listint_t list
 * Return: 0 if the list is not looped
 *         number of unique nodes in the list if otherwise
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *frog, *rat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	frog = head->next;
	rat = (head->next)->next;

	while (rat)
	{
		if (frog == rat)
		{
			frog == head;
			while (frog != rat)
			{
				nodes++;
				frog = frog->next;
				rat = rat->next;
			}

			frog = frog->next;
			while (frog != rat)
			{
				nodes++;
				frog = frog->next;
			}

			return (nodes);
		}

		frog = frog->next;
		rat = (rat->next)->next;
	}

	return (0);
}


/**
 * print_listint_safe - prints a listint_t list safely
 * @head: pointer to the head of the listint_t list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
