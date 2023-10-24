#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list hat we want to free it
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		(*head)->next = NULL;
		free((*head)->next);
	}
}
