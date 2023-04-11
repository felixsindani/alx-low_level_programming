#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that duplicates string
 * @str: string to duplicate
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	int x, y;
	char *string;

	x = 0;
	y = 1;
	if (str == 0)
		return (NULL);
	while (str[y])
	{
		y++;
	}
	string = malloc((sizeof(char) * y) + 1);
	/*size of is incremented for new val*/
	if (string == 0)
		/*if string is empty/null*/
		return (NULL);
	while (x < y)
	{
		string[x] = str[x];
		x++;
	}
	string[x] = 0;
	/*string is null character*/
	return (string);
}

