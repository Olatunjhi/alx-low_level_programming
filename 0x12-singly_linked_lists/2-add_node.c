#include "lists.h"

/**
 * *add_node - To add a new node at the begining
 * @head: first parameter
 * @str: second const parameter
 *
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = length(str);

	newNode->next = *head;

	*head = newNode;

	if (*head == NULL)
	{
		return (NULL);
	}

	free(newNode);

	return (*head);
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
