#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int i;
	const listint_t *temp;

	if (h == NULL)
	{
		return (0);
	}

	temp = h;

	for (i = 1; temp->next != NULL; i++)
	{
		temp = temp->next;
	}

	return (i);
}
