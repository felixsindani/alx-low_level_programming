#include "variadic_functions.h"

/**
 * print_strings - function to print string
 * @separator: separates two numbers
 * @n: number of arguments to be passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *string;

	va_list var_name;

	va_start(var_name, n);
	for (a = 0; a < n; a++)
	{
		string = va_arg(var_name, char *);
		if (!string)
			string = "nil";
		if (!separator)
			printf("%s", string);
		else if (separator && a == 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
	va_end(var_name);
	printf("\n");
}
