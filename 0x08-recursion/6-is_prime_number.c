#include "main.h"

int prime(v,v);

/**
 * is_prime_number - function of prime numbers
 * @n:number
 * Return: 0
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
int prime(int n, int v)
{
	if (n <= 1)
		return (0);
	if (n % v == 0 && v > 1)
		return (0);
	if ((n / v) < v)
		return (prime(n, v + 1));
}
