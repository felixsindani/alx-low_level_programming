#include "main.h"

/**
 * _islower - Check lowercase character
 * @c: character to be checked
 * Return: 1 for lowercase character
 * 0 otherwise
 */

int _islower(int c)

{

	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
