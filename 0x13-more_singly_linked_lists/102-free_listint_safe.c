include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to 1st node
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	int a;
	listint_t *str;
	size_t length;

	if (h == NULL || !*h)
		return (0);
	while (*h)
	{
		a = *h  - (*h)->next;
		if (a > 0)
		{
			str = (*h)->next;
			free(*h);
			*h = str;
			length = 0;
			length++;
		}
		else
		{
			free(*h);
			*h NULL;
			length++;
break:
		}
	}
	*h = NULL;
	return (length);
}
