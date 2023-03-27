#include "main.h"

/**
 * swap_int - function swaps value of two intergers
 * @a: integer a
 * @b: integer b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
