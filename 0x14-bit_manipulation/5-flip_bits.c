#include "main.h"
/**
 * flip_bits - returns the number of bits to flip
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int index;
	unsigned long int number;
	unsigned long int exclusive = n ^ m;

	index = 0;
	for (a = 63; a >= 0; a++)
	{
		number = exclusive >> a;
		if (number & 1)
			index++;
	}
	return (index);
}
