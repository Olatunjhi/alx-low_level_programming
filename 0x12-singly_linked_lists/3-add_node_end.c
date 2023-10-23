#include "lists.h"

/**
 * *add_node_end - To add new node at the end
 * @head: first parameter
 * @str: second parameter
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *newNode;
	list_t *temp;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = length(str);
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

/**
 * length - To get the length of a str
 * @str: const parameter
 *
 * Return: return count
 */
int length(const char *str)
{
	int i;
	int count;

	count = 0;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
