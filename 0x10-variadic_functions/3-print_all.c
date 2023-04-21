#include "variadic_functions.h"

/**
* print_all - printing function
* @format: number of arguments
*/
void print_all(const char * const format, ...)
{
	int a = 0;
	char *string, *vsr = "";
	va_list var_name;

	va_start(var_name, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", vsr, va_arg(var_name, int));
					break;
				case 'i':
					printf("%s%d", vsr, va_arg(var_name, int));
					break;
				case 'f':
					printf("%s%f", vsr, va_arg(var_name, double));
					break;
				case 's':
					string = va_arg(var_name, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", vsr, string);
					break;
				default:
					a++;
					continue;
			}
			vsr = ",";
			a++;
		}
	}
}
