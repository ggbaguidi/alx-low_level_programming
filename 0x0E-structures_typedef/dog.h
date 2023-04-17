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
	char *name = NULL;
	float *age = NULL;
	char *owner = NULL;
};
#endif
