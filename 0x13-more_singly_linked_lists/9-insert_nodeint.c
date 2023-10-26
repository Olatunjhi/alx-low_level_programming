#include "lists.h"
/**
 * *insert_nodeint_at_index - To add a newnode at a given position
 * @head: first function parameter
 * @idx: second function parameter
 * @n: third function paramwter
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newNode;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;

		if (idx == 0)
		{
			return (NULL);
		}

		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return (0);
}
