#include "main.h"

/**
 * _isdigit - Checks if its a digit
 * @c:The character to check if its dig
 * Return: 1 for digit character,
 * 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
