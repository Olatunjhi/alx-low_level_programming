#include "lists.h"

/**
 * sum_listint - To add all the nodes value together
 * @head: function parameter
 *
 * Return: addition of nodes value
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i;
	int add_node_value = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;

	for (i = 1; temp->next != NULL; i++)
	{
		add_node_value += temp->n;
		temp = temp->next;
	}

	add_node_value += temp->n;

	return (add_node_value);
}
