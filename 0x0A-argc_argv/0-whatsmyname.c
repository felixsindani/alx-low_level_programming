#include <stdio.h>

/**
 * main - function
 * 
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b;
	
	for (b = 0; b < argc; b++)
		printf("%d, %s\n", b,argv[b]);
	return (0);
}
