#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Creating a dog
 * @name: name string  of the dog
 * @age: float age of dog
 * @owner: char* of the owner
 *
 * Description: Creation of a user defined dog with the
 * above properties
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - defining a new dog of type dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

