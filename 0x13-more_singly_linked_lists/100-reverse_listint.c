#include "lists.h"

/**
 * reverse_listint - reversing fnctn
 * @head: mem addr of base element in list
 * Return: node address
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}
	*head = last;
	return (*head);
}
