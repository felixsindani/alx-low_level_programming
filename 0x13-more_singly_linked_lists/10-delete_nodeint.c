#include "lists.h"

/**
 * delete_nodeint_at_index - fntn deletes node
 * @index: index of node to delete
 * @head: mem address of 1st element
 * Return: 1 , -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *str = *head;
	listint_t *new = NULL;
	unsigned int a;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(str);
		return (1);
	}
	a = 0;
	while (a < index - 1)
	{
		if (str == NULL || !(str->next))
			return (-1);
		str = str->next;
			a++;
	}
	new = str->next;
	str->next = new->next;
	free(new);
	return (1);
}
