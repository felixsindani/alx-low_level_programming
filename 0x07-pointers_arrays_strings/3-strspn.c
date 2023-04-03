#include "main.h"

/**
 * _strspn - function that searches for substring
 * @s: input entry
 * @accept: input entry
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int k;
	unsigned int j = 0;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				j++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (0);
		}
		s++;
	}
	return (0);
}
