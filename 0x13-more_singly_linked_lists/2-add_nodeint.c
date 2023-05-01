#include "lists.h"

/**
 * add_nodeint - adds a new node start of linked list
 * @n: node to be inserted
 * @head: double pointer to new node
 * Return: new node mem location
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);
	added_node->n = n;
	added_node->next = *head;
	*head = added_node;

	return (added_node);
}
