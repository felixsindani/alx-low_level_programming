#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: head of the list
 * Return: if the list is empty, return 0 else
 * sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_n;

	sum_n = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_n += head->n;
			head = head->next;
		}
	}

	return (sum_n);
}
