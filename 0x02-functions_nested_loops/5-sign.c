#include "main.h"

/**
 * print_sign - function
 * @n: prints the sign of a number
 * Return:1 if n is greater than 0,-1 if n is less than 0, and 0 if n is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
