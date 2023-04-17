#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog aminal
 * @name: name of dog type char pointer
 *
 * @age: the age of dog type float pointer
 *
 * @owner: the proprietaire of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
