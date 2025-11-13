#ifndef DOG_H
#define DOG_H

/*
 * Structure
 */

/**
 * struct dog - Dog object
 * @name: Name of dog
 * @owner: Owner of dog
 * @age: Age of dog
 *
 * Description: Dog object with name, owner and age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


/*
 * Typedef
 */

typedef struct dog dog_t;

/*
 * Prototype
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
