#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *pta;
	unsigned int i;

	pta = malloc(sizeof(char) * size);

	if (size == 0 || pta == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		pta[i] = c;
	return (pta);
}
