#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer to list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *str;

	if (!head)
		return;
	while (*head)
	{
		str = (*head)->next;
		free(*head);
		*head = str;
	}
	*head = '\0';
}
