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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter\n);

	putchar('\n');

	return (0);
}
