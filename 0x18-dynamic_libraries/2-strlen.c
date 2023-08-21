#include "main.h"

/**
 * _strlen - checks string len
 * @s:-string to be checked
 * Return:length of the string
 */

int _strlen(char *s)
{
int str_length = 0;

while (s[str_length])
    str_length++;
	return (str_length);
}