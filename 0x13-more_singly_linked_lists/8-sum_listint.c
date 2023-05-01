#include "lists.h"

/**
 * sum_listint - functn returns sum of data (n) of a listint_t linked list
 * @head: 1st node
 * Return: Sum of all nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *str = head;
	int sum = 0;

	while (str != NULL)
	{
		sum += str->n;
		str = str->next;
	}
	return (sum);
}
