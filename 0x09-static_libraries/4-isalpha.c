#include "main.h"

/**
 * _isalpha - checks alphabetic characters
 * @c: The character to check
 * Return: 1 if c is lowercase, 0 0therwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
