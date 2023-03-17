#include<stdio.h.

/*
 * main - main function entry point
 * numbers starting from base 10
 * Return: Always 0 (Success)
 */
int main(void)/* main function*/
{
	int d;

	for (d = 0 ; d < 10 ; d++)
		printf("%d", d++);
	printf("\n");
	return (0);
}
