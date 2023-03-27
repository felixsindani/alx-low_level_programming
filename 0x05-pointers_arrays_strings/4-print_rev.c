#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int long i = 0;
	int o;

	while (*s != '\0')
	{
		long i++;
		s++;
	}
	s--;
	for (o = long i; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
