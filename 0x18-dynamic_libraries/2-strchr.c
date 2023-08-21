#include "main.h"

/**
 * _strchr - find character in a string
 * @s: string
 * @c: character to be searched
 * Return: If c is found,ptr to first occurence
 * otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int index_i;

	for (index_i = 0; s[index_i] >= '\0'; index_i++)
	{
		if (s[index_i] == c)
			return (s + index_i);
	}

	return ('\0');
}