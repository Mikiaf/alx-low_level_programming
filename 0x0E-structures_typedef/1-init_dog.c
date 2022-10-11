#include "dog.h"
#include <stdio.h>
/**
 * init_dog - prints
 * @d:pointer
 * @name:string
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
