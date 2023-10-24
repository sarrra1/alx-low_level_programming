#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node in the linked list
 * @index:  is the index of the node
 * Return: pointer to the node we looking for or NULL if
 * the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int length = 0;
	listint_t *temporary = head;

	while (temporary != NULL)
	{
		if (length < index)
		{
		       	temporary = temporary->next;
			length++;
		}

	}
	return (temporary ? temporary : NULL);
}
