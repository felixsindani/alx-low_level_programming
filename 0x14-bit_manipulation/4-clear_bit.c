#include "main.h"
/**
 * clear_bit - sets val of bit to 0
 * @index: index to set
 * @n: pointer to number to set
 * Return: 1 Success, 1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
