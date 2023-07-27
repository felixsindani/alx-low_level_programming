#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int exclusive = n ^ m;
	unsigned long int now_number;

	for (a = 63; a >= 0; a--)
	{
		now_number = exclusive >> a;
		if (now_number & 1)
			count++;
	}
	return (count);
}
