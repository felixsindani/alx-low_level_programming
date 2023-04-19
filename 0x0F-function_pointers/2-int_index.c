#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @cmp: pointer to the function to be used to compare values
 * @size: number of elements
 * @array: Array of numbers
 * Return: 0 success og interger, -1 no interger
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		while (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
