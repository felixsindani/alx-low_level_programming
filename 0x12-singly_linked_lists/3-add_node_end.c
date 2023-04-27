#include "lists.h"

/**
 * add_node_end - adds node at end of linked list
 * @head: double pointer to list_t list
 * @str: string to insert in new node
 * Return: Address of new element/NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newList;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	newList = malloc(sizeof(list_t));
	if (!newList)
		return (NULL);
	newList->str = strdup(str);
	newList->len = len;
	newList->next = NULL;

	if (*head == NULL)
	{
		*head = newList;
		return (newList);
	}
	while (t->next)
		t = t->next;
	t->next = newList;
	return (newList);
}
