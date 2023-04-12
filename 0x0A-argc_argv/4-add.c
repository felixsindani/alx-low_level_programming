#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds numbers
 * @argc: count of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int output, counter;
	char *ptr;

	output = 0;
	for (counter = 1; argv[counter] != NULL; ++counter)
	{
		output += strtol(argv[counter], &ptr, 10);
		if (*ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", output);
	return (0);
}
