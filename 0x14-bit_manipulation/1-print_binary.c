#include "main.h"
/**
 * print_binary - prints the binary rep of number
 * @n: number to be rep in binary
 */
void print_binary(unsigned long int n)
{
	int a;
	int ind;
	unsigned long int number;

	ind = 0;
	for (a = 63; a >= 0; a--)
	{
		number = n >> a;
		if (number & 1)
		{
			_putchar('1');
			ind++;
		}
		else if (ind)
			_putchar('0');
	}
	if (!ind)
		_putchar('0');
}
