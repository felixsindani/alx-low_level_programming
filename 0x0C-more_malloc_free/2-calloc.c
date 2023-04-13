#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Dynamic memory allocation fnct
 * @nmemb: number of elements of array
 * @size: size of variable
 * Return: pointer to array base address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	
	array = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
                return (NULL);
	if (array == NULL)
		return (NULL);
	return (array);
}
