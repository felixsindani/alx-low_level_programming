#include "main.h"

/**
 * _memcpy - funtion copies memory area
 * @dest: final memory
 * @src: source memory
 * @n: size of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int v = 0;
	int w = n;

	for (; v < w; v++)
	{
		dest[v] = src[v]
			--;
	}
	return (dest);
}
