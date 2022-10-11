#include "dog.h"
/**
 * init_dog - print string
 * @d: struct pointer
 * @name: string
 * @age:float
 * @owner:string
 *
 * Return:null
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
