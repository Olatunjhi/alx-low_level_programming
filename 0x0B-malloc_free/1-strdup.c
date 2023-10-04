#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - return a poinyer to a newly allocated space in memory
 * @str: function parameter
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *pta;

	if (str == NULL)
	{
		return (NULL);
	}

	for (int i = 0; str[i] != '\0'; i++)
	{
		pta = malloc(sizeof(char) * (i + 1));
	}

	if (pta == NULL)
	{
		return (NULL);
	}

	for (int r = 0; str[r] != '\0'; r++)
	{
		pta[r] = str[r];
	}

	return (pta);
}
