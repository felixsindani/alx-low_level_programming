#include "main.h"

/**
 * get_endianness - checks for little/big endian
 * Return: 0 for big, 1 little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
