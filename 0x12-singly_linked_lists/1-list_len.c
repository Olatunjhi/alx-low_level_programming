#include "lists.h"

/**
 * list_len - To get the length of the nodes
 * @h: parameter
 *
 * Return: loop iteration (i)
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
