#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concanates strings
 * @s1: string 1
 * @s2: string 2
 * Return: Concanated string
 */
char *str_concat(char *s1, char *s2)
{
	/*Declaring variables*/
	int i = 0, j = 0, k = 0, l = 0;
	char *s;
	
	*s = s;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == 0)
		return (NULL);
	j = 0;
	while ( k < l)
	{
		if (k <= i)
		{
			s(k) = s1[k];
		}
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = 0;
	return (s);
}
