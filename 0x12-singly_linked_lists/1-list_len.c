#include "lists.h"

/**
 * print_list - To get the length of the nodes
 * @h: parameter
 *
 * Return: loop iteration (i)
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *temp;

	temp = h;

	if (temp == NULL)
	{
		return (-1);
	}

	for (i = 0; temp->next != NULL; i++)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}
