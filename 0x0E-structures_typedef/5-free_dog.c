#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free function
 * @d: freed memory
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
	free(d->name);
	free(d->owner);
}
