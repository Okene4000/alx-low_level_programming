#include "lists.h"

/**
 * *find_listint_loop -  finds the loop in a linked list
 * @head: pointer to the head of the listint_t list
 * Return: NULL if there is no loop
 *         address of the node where the loop starts if otherwise
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *frog, *rat;

	if (head == NULL || head->next == NULL)
		return (NULL);

	frog = head->next;
	rat = (head->next)->next;

	while (rat)
	{
		if (frog == rat)
		{
			frog = head;

			while (frog != rat)
			{
				frog = frog->next;
				rat = rat->next;
			}

			return (frog);
		}
		frog = frog->next;
		rat = (rat->next)->next;
	}

	return (NULL);
}
