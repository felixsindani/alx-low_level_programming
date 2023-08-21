#include "main.h"
/**
*_strncpy - function that copies a string
*@dest: pointer to destination string
*@src: pointer to source string
*@n: number of bytes of buffer
* Return: pointer to dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
int counter;

for (counter = 0; counter < n && src[counter] != '\0'; counter++)
dest[counter] = src[counter];
for (; counter < n; counter++)
dest[counter] = '\0';

return (dest);
}