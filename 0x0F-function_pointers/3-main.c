#include "3-calc.h"

/**
 * main - function printing output operation
 * @argc: Number of elements
 * @argv: vector of arguments
 * Return: 0
 */
int main(__attribute__((__unused__)) int argc, char *argv[])
{
	int num1, num2;
	char *op;

	while (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != 0)
	{
		printf("Error");
		exit(99);
	}
	while ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error");
		exit(100);
	}
	printf("%d", get_op_func(op)(num1, num2));
	return (0);
}

