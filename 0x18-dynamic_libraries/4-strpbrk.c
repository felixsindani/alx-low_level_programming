#include "main.h"

/**
 * _strpbrk - Searches a string for a set of bytes.
 * @s: string
 * @accept: The set of bytes
 * Return: ptr if a set is matched,
 * otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
