#include "main.h"
#include <stdio.h>

int check_prime(int n, int v);
/**
 * prime - finds prime numbers
 * @n: number to check if prime
 * @v: iterations
 * Return: 1 prime, 0 non prime
 */
int prime(int n, int v)
{
        if (n <= 1)
                return (0);
        if (n % v == 0 && v > 1)
                return (0);
        if ((n / v) < v)
                return (prime(n, v + 1));
	return (v);
}

/**
 * is_prime_number - function of prime numbers
 * @n:number
 * Return: number
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
