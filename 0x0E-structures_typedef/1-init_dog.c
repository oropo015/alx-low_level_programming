#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - struct dog init.
 * @d: pointer to new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner
 * Return: Struct Dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
