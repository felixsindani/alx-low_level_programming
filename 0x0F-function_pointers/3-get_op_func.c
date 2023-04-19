#include "3-calc.h"

/**
 * get_op_func - function that picks operator func
 * @s: operator passed as argument
 * Return: pointer to operator function
 */
int (*get_op_func(__attribute__((__unused__))char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-"; op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index = 0;

	while (ops[index]op != NULL && *(ops[index]op) != *s)
		index++;
	return (ops[index]f);
}
