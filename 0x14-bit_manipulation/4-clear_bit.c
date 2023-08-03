#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index of bit to set to 0
 * @n: ptr to no to set
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
