#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 *  @argc: count of arguments
 *  @argv: argument vector
 *  Return: 0, Error 1
 */
int main(argc(int), char *argv[])
{
	int a, numbers, output;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	numbers = atoi(argv[1]);
	output = 0;
	if (numbers < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && numbers >= 0; a++)
	{
		while (numbers >= coins[a])
		{
			output++;
			numbers = coins[a];
		}
	}
	printf("%d\n", output);
	return (0);
}

