#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to be converted
 * Return: integer value of the converted str
 */
int _atoi(char *s)
{
	int interger_sign = 1;
	unsigned int number = 0;

	do {

		if (*s == '-')
			interger_sign *= -1;

		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');

		else if (number > 0)
			break;
	} while (*s++);

	return (number * interger_sign);
}
