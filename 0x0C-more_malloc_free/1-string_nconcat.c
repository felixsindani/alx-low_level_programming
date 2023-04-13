#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concanating function
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int felix, winnie, menelik;

	if (s1 == NULL)
	{
		felix = 0;
	}
	else
	{
		for (felix = 0; s1[felix]; ++felix)
			;
	}
	if (s2 == NULL)
	{
		winnie = 0;
	}
	else
	{
		for (winnie = 0; s2[winnie]; ++winnie)
			;
	}
	if (winnie > n)
		winnie = n;
	pointer = malloc(sizeof(char) * (felix + winnie + 1));
	if (pointer == NULL)
		return (NULL);
	for (menelik = 0; menelik < felix; menelik++)
		pointer[menelik] = s1[menelik];
	for (menelik = 0; menelik < winnie; menelik++)
		pointer[menelik + felix] = s2[menelik];
	pointer[felix + winnie] = '\0';
	return (pointer);
}
