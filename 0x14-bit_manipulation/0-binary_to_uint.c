#include "main.h"
/**
 * binary_to_uint - binary to unsigned int converter
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int con_number;

	while (b == NULL)
		return (0);
	con_number = 0;
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		con_number = 2 * con_number + (b[a] - '0');
	}
	return (con_number);
}
