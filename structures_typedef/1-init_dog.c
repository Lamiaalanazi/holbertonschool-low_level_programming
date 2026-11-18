#include "dog.h"

/**
 * init_dog - Initializes a struct dog.
 * @d: Pointer to the dog to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
