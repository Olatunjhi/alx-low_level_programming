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
		return (-1);
	}

	for (i = 0; temp->next != NULL; i++)
	{
		if (temp->str != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[%d] %s\n", temp->len, "(nil)");
		}
		i++;

		temp = temp->next;
	}

	if (temp->str != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
	}
	else
	{
		printf("[%d] %s\n", temp->len, "(nil)");
	}

	return (i);
}
