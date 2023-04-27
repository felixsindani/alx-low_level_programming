#include "lists.h"

/**
 * add_node -Adds new note at begin. of linked list
 * @head: double pointer tp list-t list
 * @str: new string to include in node
 * Return: Address of new string / Null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newList;
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	newList = malloc(sizeof(list_t));
	if (!newList)
		return (NULL);
	newList->str = strdup(str);
	newList->len = len;
	newList->next = (*head);
	(*head) = newList;

	return (*head); /* address*/
}
