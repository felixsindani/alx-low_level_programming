#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints sum of two diagonals
 * @size: input variable
 * @a: input variable
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int b, sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;
	for (b = 0; b < size; b++)
	{
		sum_1 = sum_2 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		sum_2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
