#include "lists.h"

/**
 * free_listint - To free the linked list
 * @head: parameter
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *nextNode;

	temp = head;

	while (temp != NULL)
	{
		nextNode = temp->next;
		free(temp);
		
		temp = nextNode;
	}
}
