#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate memory using malloc
 * @b: value to allocate for.
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *MP;
	MP = malloc(b);

	if (MP == NULL)
		exit(98);

	return (MP);
}
