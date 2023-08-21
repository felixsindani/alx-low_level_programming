#include "main.h"

/**
 * *_strcpy -  copies the string
 * @dest: dest string
 * @src: source string
 * Return: Pointer to dest file
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}