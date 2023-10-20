#include "lists.h"

/**
 * print_list - To print out the node
 * @h: parameter
 *
 * Return: loop iteration (i)
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *temp;

	temp = h;

	if (temp == NULL)
	{
		return (0);
	}

	for (i = 1; temp->next != NULL; i++)
	{
		if (temp->str != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		temp = temp->next;
	}

	if (temp->str != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
	}
	else
	{
		printf("[%d] %s\n", 0, "(nil)");
	}

	return (i);
}
