#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of characters
 * @size: size ofthe array
 * @c: Character for the array
 * Return: Array created
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int b;

	if (size == 0)
		return (NULL);
	k = malloc(size * sizeof(char));
	if (k == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
	{
		k[b] = c;
	}
	return (k);
}
