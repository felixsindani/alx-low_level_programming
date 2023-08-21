#include "main.h"

/**
 * _strspn - det length of substring
 * @s: string
 * @accept: The prefix to be measured
 * Return: number of bytes in string
 * consisting of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int no_of_bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				no_of_bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (no_of_bytes);
		}

		s++;
	}

	return (no_of_bytes);
}
