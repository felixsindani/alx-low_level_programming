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
	unsigned int b;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	array = void *malloc(size_t __nmemb, size_t __size);
	if (array == 0)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		array[b] = 0;
	return (array);
}
