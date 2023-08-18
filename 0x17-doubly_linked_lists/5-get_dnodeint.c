#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: ptr to head of the list
 * @index:  index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 * otherwise, return nth node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int buff = 0;
	dlistint_t *nth_node;

	if (head == NULL)
	return (NULL);

	nth_node = head;
	while (nth_node)
	{
	if (index == buff)
	return (nth_node);
	buff++;
	nth_node = nth_node->next;
	}
	return (NULL);
}
