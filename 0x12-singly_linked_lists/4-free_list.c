#include "lists.h"

/**
 * free_list - To free tge linked lists
 * @head: parameter
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *nextNode;

	temp = head;

	while (temp != NULL)
	{
		nextNode = temp->next;
		free(temp);

		temp = nextNode;
	}
}
