#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: ptr to destination string
 *@src: ptr to source string
Return: pointer to destination string
*/
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
