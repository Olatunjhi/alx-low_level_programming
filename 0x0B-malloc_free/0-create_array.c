#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of character
 * @size: function parameter
 * @c: function parameter
 * Description: create array of size size and assign char c
 *
 * Return: charArray
 */

char *create_array(unsigned int size, char c)
{
	char *charArray;
	charArray = malloc(size * sizeof(*charArray));

	if (size == 0 || charArray == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		charArray[i] = c;
	}

	return (charArray);
}
