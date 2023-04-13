#include "main.h"

/**
 * _realloc - reallocates memory
 * @new_size: new reallocated memory
 * @old_size: old allocated memory
 * @ptr: pointer to old mem
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int val, n = new_size;
	char *oldpointer = ptr;
	char *pointer;

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		return (pointer);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (val = 0; val < n; val++)
		pointer[val] = oldpointer[val];
	free(ptr);
	return (pointer);
}
