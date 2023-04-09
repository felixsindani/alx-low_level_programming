#include <stdio.h>
#include "main.h"

/**
 * _putchar - characters to stdout
 * @c: characters
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
