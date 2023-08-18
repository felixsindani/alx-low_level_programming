#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index index of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_1;
	dlistint_t *head_2;
	unsigned int i;

	head_1 = *head;

	if (head_1 != NULL)
		while (head_1->prev != NULL)
			head_1 = head_1->prev;

	i = 0;

	while (head_1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = head_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head_2->next = head_1->next;

				if (head_1->next != NULL)
					head_1->next->prev = head_2;
			}

			free(head_1);
			return (1);
		}
		head_2 = head_1;
		head_1 = head_1->next;
		i++;
	}

	return (-1);
}
