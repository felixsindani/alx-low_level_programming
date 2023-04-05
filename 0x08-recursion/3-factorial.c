#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: random number
 * Return: n
 */
int factorial(int n)
{
	int p;

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1); /* returns error */
	{
		p = n * factorial(n - 1);
		return (p);
	}
}
