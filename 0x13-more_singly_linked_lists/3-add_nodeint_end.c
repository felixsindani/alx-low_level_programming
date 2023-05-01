#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @n: node to be added
 * @head: base address to list
 * Return: mem location to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *str = *head;

	newNode = malloc(sizeof(listint_t));
	/* allocating mem for linked list */
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (str->next)
		str = str->next;
	str->next = newNode;
	return (newNode);
}
