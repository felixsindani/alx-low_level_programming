#include "main.h"

/**
 * _memset - function fill the first n bytes of the memory area
 * @n: bytes of the memory area pointed to by s
 * @s: constant ptr
 * @b: memory address ptr
 * Return: ptr to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
