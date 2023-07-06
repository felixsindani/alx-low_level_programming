#include "main.h"

/**
 * clear_bit - sets val of bit to 0
 * @n: pointer of number to set bit
 * @index: index of number
 * Return: 1 success, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
