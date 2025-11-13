#include "dog.h"

/**
 * init_dog - Inittialize dog data
 * @d: Dog structure
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = *owner;
}
