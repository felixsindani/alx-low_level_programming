#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory area
 * @s: initial address to occupie
 * @n: constant bytes to be filled
 * @b: actual value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int w;
	w = 0;

	for (; n > 0; w++)
	{
	s[w] = b;
	n--;
	}
	return (0);
}
