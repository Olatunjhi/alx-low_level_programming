#include <stdio.h>
#include "dog.h"

/**
 * print_dog - It prints struct dog
 * @d: struct pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
