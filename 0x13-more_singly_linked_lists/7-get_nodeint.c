#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @index: index of returned node
 * @head: 1st node
 * Return: Mem address of node/NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *str = head;
	unsigned int a = 0;

	while (str && a < index)
	{
		str = str->next;
		a++;
	}
	if (str)
		return (str);
	else
		return (NULL);
}
