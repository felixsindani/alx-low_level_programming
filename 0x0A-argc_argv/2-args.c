#include <stdio.h>

/**
 * main - function
 * @argc: number of arguments
 * @argv: Array of arguments entered
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
		printf("%s\n", argv[b]); /*prints string content */
	return (0);
}
