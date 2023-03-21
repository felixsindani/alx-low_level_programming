#include "main.h"

/**
 * print_alphabet_x10 - function
 * function that prints 10 times the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alphas;

	while (count++ <= 9)
	{
		for (alphas = 'a'; alphas <= 'z'; alphas++)
			_putchar(alphas);
		_putchar('\n');
	}
}
