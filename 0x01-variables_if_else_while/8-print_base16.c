#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int n;
	char c;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n');
	/* your code goes there */
	return (0);
}
