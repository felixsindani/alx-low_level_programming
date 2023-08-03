#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of bit
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	
	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}
