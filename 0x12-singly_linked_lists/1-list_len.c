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

	for (i = 0; h->next != NULL; i++)
	{
		i++;
		h = h->next;
	}

	return (i);
}
