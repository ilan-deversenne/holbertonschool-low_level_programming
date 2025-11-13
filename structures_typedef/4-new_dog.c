#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create and return a new dog
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 *
 * Return: The new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
