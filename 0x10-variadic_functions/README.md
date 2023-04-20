#	0x10. C - Variadic functions

A variadic function is a function that accepts unknown number of arguments. More than one argument is passed onto the function.
The unnamed variables are denoted bt '...' ellipsis since there count is not known.

Declaration syntax:
 Return data type function_name(int arg1, int arg2, ...);

Defination:
Return_data_type function_name(int arg1, int arg2, ...)
{
	va_list variable_name;
	int i; // iterator

	va_start(Variable_name, arg1); //initialises varidic function to 1st eelement
	for (initialisation; condition; update)
	{
		//body
		va_arg;
	}
	va_end(variable_name);
	return (function_name);
}


##	It uses macross to access the arguments

va_list - declaration
va_start - initialisation
va_arg - retrieve arguments
va_end - end function

###	stdarg.h
This header file allows use of variadic functions

### 	const keyword
used to restrict future initialisation of value of a variable to a new value
