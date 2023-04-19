#include "function_pointers.h"
/**
 * array_iterator -  iterates number of elements
 * @size: size of array
 * @action: pointer to function to be used
 * @array: the array
 * Return: elements of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
