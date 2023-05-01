#include "lists.h"

/**
 * print_listint - print elements of linked list
 * @h: linked list to be printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	if(h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
