#include "main.h"
/**
 *_strncat - function concatenates two strings
 *@dest: ptr to destination string
 *@src: ptr to source string
 *@n: number of bytes to be concatenated
 Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int string_len, i;

	string_len = 0;
	while (dest[string_len] != '\0')
	{
		string_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, string_len++)
	{
		dest[string_len] = src[i];
	}
	dest[string_len] = '\0';
	return (dest);
}