#include "main.h"
#include <stdio.h>

/**
 * _atoi -converts charcters to interger
 * @s: string
 * Return: interger equal to characters
 */
int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, length = 0, d = 0, digit = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (a < length && b == 0)
	{
		if (s[a] == '_')
		{
			++b;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
		}
		if (b % 2)
		{
			digit = -digit;
			c = c * 10 + digit;
			d = 1;
		}
		if (s[a + 1] < '0' || s[a + 1] > '9')
			break;
		d = 0;
		a++;
	}
	if (d == 0)
	{
		return (0);
	}
	return (c);
}

/**
 * main - function
 * @argc: argument count
 * @argv: array of argument
 * Return: 0, 1 error
 */
int main(int argc, char *argv[])
{
	int output, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	output = a * b;
	printf("%d\n", output);
	return (0);
}
