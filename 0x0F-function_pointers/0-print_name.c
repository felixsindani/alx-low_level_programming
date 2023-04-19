#include "function_pointers.h"

void print_name(char *name, void (*f)(char *));
/**
 * print_name - function that prints name
 * @name: name to print
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	while (name == NULL || f == NULL)
		return;
	f(name);
}
