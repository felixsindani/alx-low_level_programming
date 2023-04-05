#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string address
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
