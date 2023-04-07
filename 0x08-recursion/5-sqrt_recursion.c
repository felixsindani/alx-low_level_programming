#include "main.h"
#include <math.h>

#include"main.h"

/*
 * _sqrt_recursion - sqrt function
 * @n: number to find squareroot
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
        return (_sqrt(n, 1));
}
/**
 * _sqrt - recurring sqrt function
 * @n: number to find squareroot
 * @b: repeating number
 * Return: 0
 */
int _sqrt(int n, int b)
{
	int square;
	square = n * b;

	if (square > n)
	{
		return (-1);
	}
	if (square == n)
		return (b);
	return (_sqrt(n, b + 1));
}
