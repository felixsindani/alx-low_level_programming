#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory area
 * @s: initial address to occupie
 * @n: constant bytes to be filled
 * @b: actual value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int w = 0;

	for (; n > 0; w++)
	{
		s[w] = b;
		n--;
	}
	return (s);
}
