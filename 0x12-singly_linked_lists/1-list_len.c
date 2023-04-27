#include "lists.h"

/**
 * list_len - prints number of elements
 * @h: pointer to list_t list
 * Return: no of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

