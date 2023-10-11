#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - initilize a variable of type struct dog
 * @d: struct dog pointer
 * @name: char pointer
 * @age: float type
 * @owner: char pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}
