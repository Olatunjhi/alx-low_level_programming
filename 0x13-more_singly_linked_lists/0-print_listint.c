#include "lists.h"

/**
 * print_listint - To print value of each node
 * @h: parameter
 *
 * Return: (i)
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int i;

	if (h == NULL)
	{
		return (0);
	}

	temp = h;

	for (i = 1; temp->next != NULL; i++)
	{
		printf("%d\n", temp->n);

		temp = temp->next;
	}

	printf("%d\n", temp->n);

	return (i);
}
