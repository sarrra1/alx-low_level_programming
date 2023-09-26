#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	for (i = 0; i < index - 1; i++) 
	{
	        if (!temporary || !(temporary->next))
		        return (-1);
                temporary = temporary->next;
        }


        current = temporary->next;
        temporary->next = current->next;
        free(current); 

	return (1);
}
