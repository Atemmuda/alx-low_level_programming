#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print the properties of the dog
 * @d:pointer to the dog
 */
void  print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOnwer: %s\n", d->name,
			d->age, d->owner);
}
