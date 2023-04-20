#include "variadic_functions.h"

/**
 * print_numbers - function that prints number
 * @separator: string to print after a number
 * @n: number of parameters
 * Description: numbers separated by separator
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var_name;
	unsigned int a;

	va_start(var_name, n);
	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(var_name, int));
		else if (separator && a == 0)
			printf("%d", va_arg(var_name, int));
		else
			printf("%s%d", separator, va_arg(var_name, int));
	}
	va_end(var_name);
	printf("\n");
}
