#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct - user defined data type
 * @name: char data type variable
 * @age: float data type variable
 * @owner: char data type variable
 *
 * struct dog struct dog: user defined name to store different data kinds
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
