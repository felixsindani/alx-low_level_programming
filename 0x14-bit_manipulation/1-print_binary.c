#include "main.h"

/**
 * print_binary - gives binary equal of decimal number
 * @n: decimal number to print binary
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int now_number;

	for (a = 63; a >= 0; a++)
	{
		now_number = n >> a;

		if (now_number & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
