#include "lists.h"

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

	temp = *head;

	for (i = 1; temp->next != NULL; i++)
	{
		temp = temp->next;
	}

	newNode->next = NULL;

	temp->next = newNode;

	if (temp->next == NULL)
	{
		return (NULL);
	}

	return (temp->next);
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
