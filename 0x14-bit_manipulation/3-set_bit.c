#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at  given index
 * @index: index to set 1
 * @n: pointerto number to change
 * Return: 1 Success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
