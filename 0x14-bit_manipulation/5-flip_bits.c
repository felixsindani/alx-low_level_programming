#include "main.h"

/**
 * flip_bits - number of flips
 * @n: 1st number
 * @m: 2nd number
 * Return: no of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int counter = 0;
	unsigned long int current_no;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current_no = exclusive >> a;
		if (current_no & 1)
			counter++;
	}
	return (counter);
}
