#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: Linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *str;

	if (head != NULL)
	{
		str = head->next;
		free(head);
		head = str;
	}
}
