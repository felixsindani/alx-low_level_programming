#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to function that allocates memory
 * @b: interger to return
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
