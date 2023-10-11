#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: function parameter
 * @size: function parameter
 * @cmp: function pointer parameter
 * Return: -1 and value of array (i)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
