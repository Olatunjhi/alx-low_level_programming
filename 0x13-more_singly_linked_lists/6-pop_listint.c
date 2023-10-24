#include "lists.h"

/**
 * pop_listint - To delete the first node
 * @head: funnction parameter
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	temp = *head;

	if (temp == NULL)
	{
		return (0);
	}
	else
	{
		*head = temp->next;
		free(temp);
	}

	return (n);
}
