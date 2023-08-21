#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: -1 if string is less than the other
 * 1 if string is greater than the other,
 * 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int counter = 0, return_val;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	return_val = s1[counter] - s2[counter];
	return (return_val);
}