#include "main.h"
/**
 * get_bit -returns the value of bit at given index
 * @n: number
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_value;

	if (index > 63)
		return (-1);
	b_value = (n >> index) & 1;
	return (b_value);
}
