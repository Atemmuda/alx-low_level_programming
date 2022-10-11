#include <stdio.h>
#include "main.h"

/**
 * struct dog - Creating a dog
 * @name: name string  of the dog
 * @age: float age of dog
 * @owner: char* of the owner
 *
 * Description: Creation of a user defined dog with the
 * above properties
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
