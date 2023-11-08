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

	printf("Name: %s\nAge: %.6f\nOnwer: %s\n", d->name,
			d->age, d->owner);
}

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
