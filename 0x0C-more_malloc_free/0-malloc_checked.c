#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to function that allocates memory
 * @b: interger to return
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer; /*Declaring void pointer*/

	pointer = malloc(b); /*calling malloc function*/
	if (pointer == NULL) /* checking if memory overflow*/
		exit(98);	/*fail to allocate return val*/
	return (pointer);	/*success allocation*/
}
