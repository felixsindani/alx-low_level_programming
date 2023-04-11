#include <stdio.h>
#include <stdlib.h>

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int output, counter;
	output = 0;
	for (counter = 1; argv[counter] != NULL; ++counter)
	{
		char *ptr;
		output += strtol(argv[counter], &ptr, 10);
		if (*ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", output);
	return (0);
}
