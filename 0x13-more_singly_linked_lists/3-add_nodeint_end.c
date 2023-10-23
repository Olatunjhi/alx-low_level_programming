#include "lists.h"

/**
 * *add_nodeint_end - To add new node at the end
 * @head: first parameter
 * @n: second function parameter
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;
	int i;

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
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;

		for (i = 1; temp->next != NULL; i++)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
