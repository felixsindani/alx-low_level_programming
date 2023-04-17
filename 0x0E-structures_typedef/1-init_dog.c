#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialise struct
 * @name: variable to store name of dog
 * @age: Variable to store age of dog
 * #owner: variable to store owner of dog
 * @d: struct dog
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
