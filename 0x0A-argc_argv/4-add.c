#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check for digits
 * @str: string
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int counter;

	counter = 0;
	while (counter < strlen(*str[counter]))
	{
		if (!isdigit(*str[counter]))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/**
 * main - prints name
 * @argc: counts arguments
 * @argv: Arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int counter;
	int str_to_int;
	int sum = 0;

	counter = 1;
	while (counter < argc)
	{
		if (check_num(argv[counter]))
		{
			str_to_int = atoi(argv[counter]);
			sum += str_to_int;
		}
		else
		{
		printf("error\n");
		return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
