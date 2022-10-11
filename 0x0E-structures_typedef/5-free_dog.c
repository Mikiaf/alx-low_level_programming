#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the malloc space
 * @d: pointer
 *
 * Return - null
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
