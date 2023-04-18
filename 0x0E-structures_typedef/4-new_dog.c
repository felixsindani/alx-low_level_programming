#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strcopy - copy string to source(src)
 * @dest: Buffer storing string copy
 * @src: source string
 * Return: pointer to destination string
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for ( ; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * _strlen - determines length of string
 * @str: string to be determined
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * new_dog - funtn that creates new dog
 * @name: Thee name of the dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: New struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *simba;

	if (name == NULL || owner == NULL)
		return (NULL);
	simba = malloc(sizeof(dog_t));
	if (simba == NULL)
		return (NULL);
	simba->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (simba->name == NULL)
	{
		free(simba);
		return (NULL);
	}
	simba->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (simba->owner == NULL)
	{
		free(simba);
		free(simba->name);
		return (NULL);
	}
	simba->name = _strcopy(simba->name, name);
	simba->age = age;
	simba->owner = _strcopy(simba->owner, owner);
	return (simba);
}
