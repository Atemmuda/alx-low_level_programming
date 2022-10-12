#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises a dog
 * @d: pointer to the struct dog.
 * @name: name of the initialised dog
 * @age: age of the initialised dog
 * @owner: owner of this dog
 *
 * Return - Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
