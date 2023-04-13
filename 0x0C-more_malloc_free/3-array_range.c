#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function creating array of int
 * @max: max range of values
 * @min: min range of values
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int sta, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
		return (NULL);
	for (sta = 0; min <= max; sta++)
		pointer[sta] = min++;
	return (pointer);
}
