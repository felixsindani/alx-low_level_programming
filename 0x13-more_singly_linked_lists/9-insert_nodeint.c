#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to 1st node
 * @idx: index where new node is inserted
 * @n: node to be inserted
 * Return: mem address to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *str = *head;
	unsigned int a;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (a = 0; str && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newNode = str->next;
			str->next = newNode;
			return (newNode);
		}
		else
			str = str->next;
	}
	return (NULL);
}
