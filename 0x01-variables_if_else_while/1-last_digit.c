#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * random number to the variable
 * Return: 0
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	b = n % 10;
	printf("Last digit of %d is %d", n, b);
	if (b > 5)
	{
		printf(" and is greater than 5\n");
	}
	if (b == 0)
	{
		printf(" and is 0\n");
	}
	if (b < 6 && b != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
