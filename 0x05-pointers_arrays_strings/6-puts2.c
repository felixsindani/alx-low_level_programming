#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: char to check
 * Return: 0 is succes
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		if (string % 2 == 0)
		_putchar(str[string]);
	}
	_putchar('\n);
}
