#include "dog.h"
#include <stdio.h>
/**
 * new_dog - pointer function that creates a new dog
 * @name:string
 * @age:float
 * @owner:string
 *
 * Return:0;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if(new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog_>owner = owner;
	}
	else
	{
		return(NULL);
	}
}
