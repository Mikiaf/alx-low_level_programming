#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct
 * @d:pointer
 *
 * Return:null
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if(d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
