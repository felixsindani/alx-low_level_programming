#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string with bin number
 * Return: Converted no
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int bin_val = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		bin_val = 2 * bin_val + (b[a] - '0');
	}
	return (bin_val);
}
