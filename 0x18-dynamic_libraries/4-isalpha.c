#include "main.h"

/**
 * _isalpha - Checks if char is alphabetic character
 * @c: character
 * Return: 1 for alphabetic character
 * 0 otherwise
 */
int _isalpha(int c)
{
    if ((c > 64 && c < 98) || (c > 96 && c < 123))
    {
        return (1);
    }
    return (0);
}