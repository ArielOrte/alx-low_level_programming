#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes type struct dog as a variable
 * @d: pointer to structure
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
