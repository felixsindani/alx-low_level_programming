#include<stdio.h>

/**
 * main - program to return 1
 *
 * Return:Always 1 (success)
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(&err, sizeof(char), 59, stderr);
	return (1);
}
