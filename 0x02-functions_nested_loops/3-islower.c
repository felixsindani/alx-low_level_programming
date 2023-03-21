#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: checks for lowercase character
 *
 * Return: 1 if character is lowecas, otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

