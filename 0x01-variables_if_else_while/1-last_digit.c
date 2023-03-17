#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints lowercase alphabets
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
