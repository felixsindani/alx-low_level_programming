#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: num to print in bin
 */
void print_binary(unsigned long int n)
{
	int a;
	int counter = 0;
	unsigned long int current_number;

	for (a = 63; a >= 0; a--)
	{
		current_number = n >> a;

		if (current_number & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
