#include "lists.h"

/**
 * pop_listint - fnctn that deletes head node of a listint_t
 * @head: mem location of base element
 * Return: Deleted data or 0
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *str;

	if (head == NULL || !*head)
		return (0);
	number = (*head)->n;
	str = (*head)->next;
	free(*head);
	*head = str;
	return (number);
}
