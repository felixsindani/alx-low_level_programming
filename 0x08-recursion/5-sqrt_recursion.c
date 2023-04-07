#include "main.h"
#include <stdio.h>

int _sqrt(int n, int b);
/**
 * _sqrt_recursion - function to find squareroot
 * @n: number to find sqrt
 * Return: square
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - finds squareroot
 * @n: number to find sqrt
 * @b: iteration
 * Return: square
 */
int _sqrt(int n, int b)
{
	int sqrt = b * b;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (b);
	return (_sqrt(n, b + 1));
}
