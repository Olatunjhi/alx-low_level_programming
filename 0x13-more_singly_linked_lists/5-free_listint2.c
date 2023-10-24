#include "lists.h"

/**
 * free_listint2 - To free each node
 * @head: function parameter
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *nextNode;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	temp = *head;

	while (temp != NULL)
	{
		nextNode = temp->next;
		free(temp);
		temp = nextNode;
	}

	*head = NULL;
}
