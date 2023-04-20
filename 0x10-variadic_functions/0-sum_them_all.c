#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function that calc sum of its args
* @n: number of arguments
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list Var_name; /*declaring variadic variable*/
	unsigned int a;
	int sum = 0;
	
	va_start(Var_name, n); /*initialising the var function*/
	for (a = 0; a < n; a++)
	{
		sum += va_arg(Var_name, int); /*Retrieving value of arguments at indexes*/
	}
	va_end(Var_name); /* check for sentinel value */
	return (sum);
}
